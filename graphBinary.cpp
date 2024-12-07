#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Check if a path exists with maximum edge weight <= mid
bool isPathPossible(int mid, vector<vector<pair<int, int>>>& graph, int start, int end) {
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (node == end) return true; // Path found

        for (auto& edge : graph[node]) {
            int neighbor = edge.first, weight = edge.second;
            if (!visited[neighbor] && weight <= mid) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return false; // No path found
}

int binarySearchGraph(vector<vector<pair<int, int>>>& graph, int start, int end) {
    int low = 0, high = INT_MAX, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPathPossible(mid, graph, start, end)) {
            result = mid;
            high = mid - 1; // Try for a smaller maximum weight
        } else {
            low = mid + 1;
        }
    }

    return result; // Minimum maximum weight for a path
}

int main() {
    vector<vector<pair<int, int>>> graph = {
        {{1, 4}, {2, 3}}, // Node 0
        {{0, 4}, {2, 5}, {3, 6}}, // Node 1
        {{0, 3}, {1, 5}, {3, 2}}, // Node 2
        {{1, 6}, {2, 2}}  // Node 3
    };

    int start = 0, end = 3;
    cout << "Minimum maximum weight for a path: " << binarySearchGraph(graph, start, end) << endl;
    return 0;
}