#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
/*
2

5

4 14 15 7 9

4

1 6 9 2
*/
int GCD(int a, int b) {
    if(b==0) return a;
    return GCD(b, a%b);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


int t; cin >> t;

while(t--) {
    int n; cin >> n;
    vector<int> f(MAX+1, 0);
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        f[arr[i]]++;
    }

    for(int i=MAX; i>=1; i--) {
        int count=0;
        for(int j=i; j<=MAX; j+=i) {
            count+=f[j];
        }
        if(count>=2) {
            cout << i<< endl;
            break;
        }
    }
}
return 0;
}