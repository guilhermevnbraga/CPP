#include <iostream>
#include <vector>
using namespace std;

// Depth-First Search using recursion
void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " "; // Process the node

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

int main() {
    vector<vector<int>> graph = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2}};
    vector<bool> visited(graph.size(), false);
    int start = 0;
    cout << "DFS starting from node " << start << ": ";
    dfs(start, graph, visited);
    return 0;
}