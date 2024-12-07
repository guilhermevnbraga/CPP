#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Breadth-First Search on a graph
void bfs(int start, vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // Process the node

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    vector<vector<int>> graph = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2}};
    int start = 0;
    cout << "BFS starting from node " << start << ": ";
    bfs(start, graph);
    return 0;
}