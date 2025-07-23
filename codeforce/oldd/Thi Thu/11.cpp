#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> findMaxOfMinForAllLengths(const vector<int>& A, int N) {
    vector<int> result(N, 0);

    for (int x = 1; x <= N; ++x) {
        deque<int> dq;
        int maxOfMin = 0;

        for (int i = 0; i < N; ++i) {
            if (!dq.empty() && dq.front() <= i - x) {
                dq.pop_front();
            }

            while (!dq.empty() && A[dq.back()] >= A[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= x - 1) {
                int minInWindow = A[dq.front()];
                maxOfMin = max(maxOfMin, minInWindow);
            }
        }

        result[x - 1] = maxOfMin;
    }

    return result;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> result = findMaxOfMinForAllLengths(A, N);

    for (int x = 0; x < N; ++x) {
        cout << result[x] << " ";
    }
    cout << endl;

    return 0;
}
