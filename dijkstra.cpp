#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Dijkstra's Algorithm to find the shortest path from the source to all other vertices
void dijkstra(int source, vector<vector<pair<int, int>>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX); // Stores shortest distance to each node
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; // Min-heap for priority queue

    dist[source] = 0; // Distance to the source is 0
    pq.push({0, source}); // {distance, node}

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // If the distance is already larger than the stored value, skip it
        if (currDist > dist[node]) continue;

        // Process neighbors
        for (auto& neighbor : graph[node]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            if (dist[node] + weight < dist[nextNode]) {
                dist[nextNode] = dist[node] + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    // Print shortest distances
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX) {
            cout << "Node " << i << ": Unreachable\n";
        } else {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }
}

int main() {
    vector<vector<pair<int, int>>> graph = {
        {{1, 4}, {2, 1}}, // Node 0
        {{2, 2}, {3, 1}}, // Node 1
        {{3, 5}},         // Node 2
        {}                // Node 3
    };

    int source = 0;
    dijkstra(source, graph);
    return 0;
}