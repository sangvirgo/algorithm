#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
Các bài toán tối ưu hóa như bài toán cái túi (Knapsack problem), bài toán người bán hàng (Travelling Salesman Problem).
Các bài toán về lập lịch (scheduling) và phân chia tài nguyên.
Các bài toán về định tuyến (routing) và vị trí (location) trong các hệ thống lớn.

5 72
1 2 10 20 50
*/
int n, S, currentSum;
vector<int> bestOption, resultMoney, arr;

void backTrack(int k) {
    int lastIndex=resultMoney.empty()?1:resultMoney.back();

    for(int i=lastIndex; i<=n; i++) {
        resultMoney.push_back(i);
        currentSum+=arr[i];

        if(currentSum>=S) {
            if(currentSum==S) {
                bestOption.clear();
                for(int it: resultMoney) bestOption.push_back(it);
            } 
        } else if(bestOption.empty() || bestOption.size()>resultMoney.size()) backTrack(k+1);

        resultMoney.pop_back();
        currentSum-=arr[i];
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cin >> n >> S; 
arr.resize(n+1);
for(int i=1; i<=n; i++) cin >> arr[i];
currentSum=0; resultMoney.clear(); bestOption.clear();

backTrack(1);

for(int it: bestOption) cout << arr[it] << " ";
return 0;
}