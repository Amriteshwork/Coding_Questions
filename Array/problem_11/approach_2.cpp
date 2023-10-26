#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int findMinIndexDifference(const std::vector<int>& arr, int element1, int element2) {
    unordered_map<int, int> elementToIndex;
    int minDifference = INT_MAX;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == element1) {
            if (elementToIndex.find(element2) != elementToIndex.end()) {
                int difference = i - elementToIndex[element2];
                minDifference = std::min(minDifference, difference);
            }
            elementToIndex[element1] = i;
        } else if (arr[i] == element2) {
            if (elementToIndex.find(element1) != elementToIndex.end()) {
                int difference = i - elementToIndex[element1];
                minDifference = std::min(minDifference, difference);
            }
            elementToIndex[element2] = i;
        }
    }

    return minDifference;
}

int main() {
    vector<int> arr = {1, 3, 5, 4, 8, 2, 4, 3, 6, 5 };
    int element1 = 3;
    int element2 = 2;

    int minDifference = findMinIndexDifference(arr, element1, element2);

    if (minDifference == INT_MAX) {
        cout << "Elements not found in the array." << endl;
    } else {
        cout << "Minimum index difference: " << minDifference << endl;
    }

    return 0;
}