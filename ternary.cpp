#include <iostream>
#include <vector>
using namespace std;

// Ternary Search: Assumes a unimodal function in a sorted array
int ternarySearch(vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1; // Target not found
    }
    int mid1 = low + (high - low) / 3;
    int mid2 = high - (high - low) / 3;

    if (arr[mid1] == target) {
        return mid1; // Target found
    } else if (arr[mid2] == target) {
        return mid2; // Target found
    }

    if (target < arr[mid1]) {
        return ternarySearch(arr, target, low, mid1 - 1); // Search left third
    } else if (target > arr[mid2]) {
        return ternarySearch(arr, target, mid2 + 1, high); // Search right third
    } else {
        return ternarySearch(arr, target, mid1 + 1, mid2 - 1); // Search middle third
    }
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;
    int result = ternarySearch(arr, target, 0, arr.size() - 1);
    cout << "Index of target: " << result << endl;
    return 0;
}