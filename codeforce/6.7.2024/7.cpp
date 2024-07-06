#include <bits/stdc++.h>
using namespace std;

bool isPrime(unsigned long long x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (unsigned long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

vector<unsigned long long> findAllGCD(unsigned long long n) {
    vector<unsigned long long> arr;
    for (unsigned long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            arr.push_back(i);
            if (i != n / i) arr.push_back(n / i);
        }
    }
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    unsigned long long n;
    cin >> n;

    vector<unsigned long long> result = findAllGCD(n);
    vector<unsigned long long> finalResult;

    for (unsigned long long i = 0; i < result.size(); i++) {
        if (!isPrime(result[i]) && result[i] != 1) {
            finalResult.push_back(result[i]);
        }
    }

    if (finalResult.empty()) {
        cout << -1 << endl;
    } else {
        for (unsigned long long i = 0; i < finalResult.size(); i++) {
            cout << finalResult[i];
            if (i < finalResult.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}