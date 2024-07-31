#include <bits/stdc++.h>
using namespace std;

#define ll long long

int theLastDigit(int a, int b) {
    vector<int> cycles[10] = {{0}, {1}, {2, 4, 8, 6}, {3, 9, 7, 1}, {4, 6}, {5}, {6}, {7, 9, 3, 1}, {8, 4, 2, 6}, {9, 1}};
    
    int lastDigit = a % 10;
    
    vector<int> cycle = cycles[lastDigit];
    int cycleLength = cycle.size();
    
    if (b == 0) return 1;
    
    int index = (b - 1) % cycleLength;
    
    return cycle[index];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        cout << theLastDigit(a, b) << endl;
    }
    return 0;
}
