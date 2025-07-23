#include <bits/stdc++.h>
using namespace std;

void countInRange(vector<int> &sort, int &a, int &b, int &data) {
    int predator_low=data+a;
    int predator_high=data+b;
    int predator_count=lower_bound(sort.begin(), sort.end(), predator_high)-lower_bound(sort.begin(), sort.end(), predator_low);

    int prey_low=data-a;
    int prey_high=data-b;
    int prey_count=upper_bound(sort.begin(), sort.end(), prey_high)-upper_bound(sort.begin(), sort.end(), prey_low);

    cout << predator_count << " " << abs(prey_count) << endl;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> noSort=p;
    // Sắp xếp mảng p
    sort(p.begin(), p.end());

    for (int i = 0; i < n; ++i) {
        countInRange(p, a, b, noSort[i]);
    }


    return 0;
}
