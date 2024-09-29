#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/
bool check(int n){
    string temp=to_string(n);
    vector<int> check1;
    for (int i = 0; i<temp.length();++i){
        if (temp[i]!= '6' || temp[i] != '8') return false;
        if (temp[i] == '6'){
            check1[i] = 1;
        }if(temp[i]== '8'){
            check1[i] = 2;
        }
    }
    vector<int> hihi=check1;
    sort(check1.begin(), check1.end(),greater<int>());
    for(int i=0; i<hihi.size(); i++) {
        if (hihi[i] != check1[i]){
            return false;
        }
    }
    return true;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n  = 8888666;
    if(check(n)){
        cout<<"vghjfh";

    }else{
        cout<<"dasdas";
    }
return 0;
}