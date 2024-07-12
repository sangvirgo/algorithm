#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://codeforces.com/gym/105123/problem/D1
*/
int predators(int &data, int &a, int &b, vector<int> &arr) {
    int sum=0;
    for(auto it: arr) {
        if(it-data>=a && it-data <b) {
            sum++;
        }
    }
    return sum;
}

int preys(int &data, int &a, int &b, vector<int> &arr) {
    int sum=0;
    for(auto it: arr) {
        if(data-it>=a && data-it <b) {
            sum++;
        }
    }
    return sum;
}

int main() {
int n, a, b; cin >> n >> a >> b;
vector<int> arr(n);
for(int i=0; i<n; i++) {
    cin>> arr[i];
}

for(int i=0; i<n; i++) {
    cout << predators(arr[i], a, b, arr) << " ";
    cout << preys(arr[i], a, b, arr) << endl;
}
return 0;
}