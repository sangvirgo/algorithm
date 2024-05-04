#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
3 3 
1 2 
2 3
3 1
*/
int vertices, edges, res=0;
vector<int> graph[MAX]; 
int Low[MAX], Number[MAX], cnt = 0;
stack<int> st;

void input() {
    cin >> vertices >> edges;
    for(int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
    }
}

void tarjan(int u) {
    Low[u]=Number[u]=++cnt;
    st.push(u);
    for(auto it: graph[u]) {
        if(Number[it]) {
            Low[u] = min(Low[u], Number[it]);
        } else {
            tarjan(it);
            Low[u] = min(Low[u], Low[it]);
        }
    }
    if(Low[u] == Number[u]) {
        res++;
        int temp;
        do {
            temp = st.top();
            st.pop();
            Number[temp] = Low[temp] = INT_MAX;
        } while(temp != u);
    }
}

int main() {
input();
for(int i = 1; i <= vertices; i++) {
    if(!Number[i]) {
        tarjan(i);
    }
}
cout << res;
return 0;
}