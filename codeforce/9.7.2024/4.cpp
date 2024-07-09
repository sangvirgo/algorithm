#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤9
) — the number of digits.

The second line of each test case contains n
 space-separated integers ai
 (0≤ai≤9
) — the digits in the array.

Output
For each test case, output a single integer — the maximum product Slavic can make, by adding 1
 to exactly one of his digits.


4
4
2 2 1 2
3
0 1 2
5
4 3 2 3 4
9
9 9 9 9 9 9 9 9
*/


int main() {
int t; cin >> t;
while(t--) {
    int n; cin >> n;
    int max_value=0;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        int sum=arr[i]+1;
        for(int j=0; j<n; j++) {
            if(i==j) continue;
            sum*=arr[j];
        }
        if(sum>max_value) max_value=sum;
    }
    cout << max_value << endl;
}
return 0;
}