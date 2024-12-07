#include <iostream>
#include <vector>
using namespace std;

// Binary Search: Requires a sorted array
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids overflow
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;
    int result = binarySearch(arr, target);
    cout << "Index of target: " << result << endl;
    return 0;
}