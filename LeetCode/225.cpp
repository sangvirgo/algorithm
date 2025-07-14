#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
        queue<int> q;
    }
    
    void push(int x) {
        q.push(x);
        for(int i =0; i<q.size(); i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int temp= q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        int temp= q.front();
        return temp;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}