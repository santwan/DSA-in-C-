#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicate(int arr[], int n) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return true;  // Duplicate found
        }
        seen.insert(arr[i]);
    }

    return false;  // No duplicates found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (containsDuplicate(arr, n)) {
        cout << "Array contains duplicate." << endl;
    } else {
        cout << "No duplicates in the array." << endl;
    }

    return 0;
}
