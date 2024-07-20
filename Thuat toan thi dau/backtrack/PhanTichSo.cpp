#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*

*/
int n, S, currentSum;
vector<int> a, resultMoney;

void printResult() {
    for(int it: resultMoney) cout << a[it] << " ";
    cout << endl;
}

void backTracking(int i) {
    int indexLast=resultMoney.empty()?1:resultMoney.back();

    for(int j=indexLast; j<=n; j++) {
        resultMoney.push_back(j);
        currentSum+=a[j];

        if(currentSum>=S) {
            if(currentSum==S) printResult();
        } else {
            backTracking(i+1);
        }

        resultMoney.pop_back();
        currentSum-=a[j];
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cin >> n >> S;
a.resize(n+1);
for(int i = 1; i <= n; i++) cin >> a[i];
currentSum=0;
sort(a.begin(), a.end());

backTracking(1);
return 0;
}