#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/critical-connections-in-a-network/
*/


class Solution {
private: 
    int time=1;
    void dfs(int node, int parent, vector<int>& low, vector<int>& disc, vector<bool>& visited, vector<vector<int>>& graph, vector<vector<int>>& result) {
        visited[node]=true;
        disc[node]=low[node]=time++;
        for(auto it: graph[node]) {
            if(it ==parent) continue;
            if(!visited[it]) {
                dfs(it, node, low, disc, visited, graph, result);
                low[node]=min(low[node], low[it]);
                if(low[it]>disc[node]) {
                    result.push_back({node, it});
                }
            } else {
                low[node]=min(low[node], disc[it]);
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        vector<int> low(n, -1), disc(n, -1);
        vector<bool> visited(n, false);
        vector<vector<int>> result;
        for(auto it: connections) {
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        dfs(0, -1, low, disc, visited, graph, result);
        return result;
    }
};


int main() {

return 0;
}