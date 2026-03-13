#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> data = {2, 4, 5, 7, 12, 14, 26, 29, 36, 44, 51, 79, 85};
    vector<int> search_targets = {4, 12, 26, 35, 85};

    cout << "Array: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << "\n\n";

    for (int target : search_targets) {
        int result = binary_search(data, target);

        if (result != -1) {
            cout << "Search for " << target << ": Found at index " << result << "\n";
        } else {
            cout << "Search for " << target << ": Not found in the array\n";
        }
    }

    return 0;
}