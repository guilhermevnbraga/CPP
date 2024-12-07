#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Example: Fractional Knapsack Problem
struct Item {
    int weight, value;
    double valuePerWeight; // For sorting items by value/weight ratio
};

bool compare(Item a, Item b) {
    return a.valuePerWeight > b.valuePerWeight; // Descending order
}

double fractionalKnapsack(vector<Item>& items, int capacity) {
    sort(items.begin(), items.end(), compare); // Sort by value/weight ratio
    double totalValue = 0;

    for (auto& item : items) {
        if (capacity >= item.weight) {
            totalValue += item.value;
            capacity -= item.weight;
        } else {
            totalValue += item.valuePerWeight * capacity;
            break; // Knapsack full
        }
    }

    return totalValue;
}

int main() {
    vector<Item> items = {{10, 60, 6.0}, {20, 100, 5.0}, {30, 120, 4.0}};
    int capacity = 50;

    for (auto& item : items) {
        item.valuePerWeight = (double)item.value / item.weight;
    }

    cout << "Maximum value in Knapsack: " << fractionalKnapsack(items, capacity) << endl;
    return 0;
}