#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;

    // Iterate through the array to find the key
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }

    // Return the vector of indices
    return indices;
}

int main() {
    // Test case ONEEEEEE
    vector<int> arr1 = {7, 2, 3, 7, 2, 5, 7, 8, 7};
    vector<int> result1 = findAllIndices(arr1, 7);
    cout << "Indices of 7 in arr1: ";
    if (result1.empty()) {
        cout << "Key not found" << endl;
    } else {
        for (int idx : result1) {
            cout << idx << " ";
        }
        cout << endl;
    }
return 0;
}