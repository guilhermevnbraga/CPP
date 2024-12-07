#include <iostream>
#include <vector>
using namespace std;

// Perform DFS with depth limit
bool dfsWithLimit(vector<vector<int>>& graph, int node, int target, int limit, vector<bool>& visited) {
    if (node == target) return true; // Target found
    if (limit == 0) return false; // Depth limit reached

    visited[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (dfsWithLimit(graph, neighbor, target, limit - 1, visited)) {
                return true; // Path found
            }
        }
    }

    visited[node] = false; // Backtrack
    return false;
}

// Iterative deepening search
bool iterativeDeepeningDFS(vector<vector<int>>& graph, int start, int target, int maxDepth) {
    for (int depth = 0; depth <= maxDepth; depth++) {
        vector<bool> visited(graph.size(), false);
        if (dfsWithLimit(graph, start, target, depth, visited)) {
            return true;
        }
    }
    return false; // Target not found within max depth
}

int main() {
    vector<vector<int>> graph = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2}};
    int start = 0, target = 3, maxDepth = 3;

    if (iterativeDeepeningDFS(graph, start, target, maxDepth)) {
        cout << "Target found within depth " << maxDepth << endl;
    } else {
        cout << "Target not found within depth " << maxDepth << endl;
    }

    return 0;
}