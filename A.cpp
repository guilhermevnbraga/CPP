#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Node structure for A* search
struct Node {
    int vertex;
    int cost;
    int heuristic;

    // Custom comparison operator for priority queue
    bool operator>(const Node& other) const {
        return (cost + heuristic) > (other.cost + other.heuristic);
    }
};

// A* Search Algorithm
void aStar(int start, int goal, vector<vector<pair<int, int>>>& graph, vector<int>& heuristic) {
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    vector<bool> visited(graph.size(), false);

    pq.push({start, 0, heuristic[start]});

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        if (visited[current.vertex]) continue;
        visited[current.vertex] = true;

        cout << "Visited node: " << current.vertex << ", Cost: " << current.cost << endl;

        if (current.vertex == goal) {
            cout << "Goal reached!" << endl;
            return;
        }

        for (auto& edge : graph[current.vertex]) {
            int neighbor = edge.first;
            int weight = edge.second;

            if (!visited[neighbor]) {
                pq.push({neighbor, current.cost + weight, heuristic[neighbor]});
            }
        }
    }
}

int main() {
    vector<vector<pair<int, int>>> graph = {{{1, 1}, {2, 4}}, {{2, 2}, {3, 6}}, {{3, 3}}, {}};
    vector<int> heuristic = {7, 6, 2, 0}; // Example heuristic values
    int start = 0, goal = 3;

    aStar(start, goal, graph, heuristic);
    return 0;
}