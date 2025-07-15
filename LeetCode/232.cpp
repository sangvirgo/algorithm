#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class MyQueue {
private:
    stack<int> s;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        vector<int> temp;
        while(!s.empty()) {
            temp.push_back(s.top());
            s.pop();
        }
        s.push(x);
        reverse(temp.begin(), temp.end());
        for(const auto& it: temp) {
            s.push(it);
        }
    }
    
    int pop() {
        int temp=s.top();
        s.pop();
        return temp;
    }
    
    int peek() {
        int temp=s.top();
        return temp;
    }
    
    bool empty() {
        return s.empty();
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}