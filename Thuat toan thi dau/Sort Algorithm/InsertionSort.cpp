#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
const int MOD = 1e9 + 7;
/*
https://wiki.vnoi.info/algo/basic/sorting#s%E1%BA%AFp-x%E1%BA%BFp-n%E1%BB%95i-b%E1%BB%8Dt-bubble-sort
*/
vector<ll> createRamdomArray(ll n) {
    vector<ll> arr(n);
    srand(time(0));
    for(ll i=0; i<=n; i++) {
        arr[i]=1+(rand()%MAX);
    }
    return arr;
}

void insertionSort(ll n, vector<ll>& arr) {
    for(int i=1; i<n; i++) {
        int j=i;
        ll temp=arr[i];

        while(j>0 && arr[i]<arr[j-1]) j--;

        for(int k=i; k>j; k--) {
            arr[k]=arr[k-1];
        }
        arr[j]=temp;
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

clock_t start, end;
start=clock();

ll n; cin >> n; 
vector<ll> arr=createRamdomArray(n);
insertionSort(n, arr);
for(int i: arr) cout << i << " ";


end=clock();
double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
cout << "\nTime taken by program is: " << fixed << setprecision(20)<< time_taken << endl;
return 0;
}