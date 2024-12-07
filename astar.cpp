#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <climits>
using namespace std;

// Function to calculate heuristic (example: Euclidean distance)
double heuristic(int current, int goal, vector<pair<int, int>>& coordinates) {
    int x1 = coordinates[current].first, y1 = coordinates[current].second;
    int x2 = coordinates[goal].first, y2 = coordinates[goal].second;
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// A* Algorithm
void aStar(int start, int goal, vector<vector<pair<int, int>>>& graph, vector<pair<int, int>>& coordinates) {
    int n = graph.size();
    vector<double> dist(n, INT_MAX);  // Distance from start to node
    vector<double> fCost(n, INT_MAX); // f(n) = g(n) + h(n)
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<>> pq; // Min-heap

    dist[start] = 0;
    fCost[start] = heuristic(start, goal, coordinates);
    pq.push({fCost[start], start}); // {fCost, node}

    while (!pq.empty()) {
        int current = pq.top().second;
        pq.pop();

        if (current == goal) {
            cout << "Reached the goal node!\n";
            cout << "Shortest path cost: " << dist[goal] << endl;
            return;
        }

        for (auto& neighbor : graph[current]) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            double tentativeDist = dist[current] + weight;
            if (tentativeDist < dist[nextNode]) {
                dist[nextNode] = tentativeDist;
                fCost[nextNode] = dist[nextNode] + heuristic(nextNode, goal, coordinates);
                pq.push({fCost[nextNode], nextNode});
            }
        }
    }

    cout << "No path found from node " << start << " to node " << goal << endl;
}

int main() {
    // Graph representation: adjacency list with weights
    vector<vector<pair<int, int>>> graph = {
        {{1, 1}, {2, 4}}, // Node 0
        {{2, 2}, {3, 6}}, // Node 1
        {{3, 3}},         // Node 2
        {}                // Node 3
    };

    // Node coordinates for heuristic calculation
    vector<pair<int, int>> coordinates = {
        {0, 0}, // Node 0
        {1, 1}, // Node 1
        {2, 2}, // Node 2
        {3, 3}  // Node 3
    };

    int start = 0, goal = 3;
    aStar(start, goal, graph, coordinates);
    return 0;
}
