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
    for(ll i=0; i<n; i++) {
        arr[i]=1+(rand()%MAX);
    }
    return arr;
}

void QuickSort(int l, int r, vector<ll>& arr) {
    if(l>=r) return;

    int pivot=arr[l+rand()%(r-l)];
    int i=l, j=r;

    while(i<=j) {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<=j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if(l<j) QuickSort(l, j, arr);
    if(r>i) QuickSort(i, r, arr);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

clock_t start, end;
start=clock();

ll n; cin >> n; 
vector<ll> arr=createRamdomArray(n);
int l=0, r=n-1;
QuickSort(l, r, arr);
for(int i: arr) cout << i << " ";


end=clock();
double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
cout << "\nTime taken by program is: " << fixed << setprecision(20)<< time_taken << endl;
return 0;
}