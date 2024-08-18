#include <bits/stdc++.h>

int findVolume(std::vector<int> heights, int n) {
    int requiredHeight = 1;
    int volume = 0;

    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (heights[left] - requiredHeight > 0 && heights[right] - requiredHeight > 0) {
            volume += (std::min(heights[left], heights[right]) - requiredHeight) * (right - left);
            requiredHeight = std::min(heights[left], heights[right]);
        }
        if (heights[left] < heights[right]) {
            if (volume > 0)
                volume -= heights[left] - 1;
            ++left;
        } else {
            if (volume > 0)
                volume -= heights[right] - 1;
            --right;
        }
    }

    return volume;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> heights[i];
    }
    int max = findVolume(heights, n);
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j > i; --j) {
            for (int m = 0; m <= k; ++m) {
                heights[i] += m;
                heights[j] += k - m;
                max = std::max(max, findVolume(heights, n));
                heights[i] -= m;
                heights[j] -= k - m;
            }
        }
    }

    std::cout << max;
}