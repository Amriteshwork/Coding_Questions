#include <iostream>
#include <unordered_set>
using namespace std;

void FindK(int arr[], int arr_len, int k) {
    unordered_set<int> elements;

    for (int i = 0; i < arr_len; i++) {
        int curr_element = arr[i];
        if (elements.count(curr_element - k) > 0) {
            cout << curr_element << ", " << curr_element - k << endl;
        }
        if (elements.count(curr_element + k) > 0) {
            cout << curr_element + k << ", " << curr_element << endl;
        }
        elements.insert(curr_element);
    }
}

int main() {
    int arr[] = {1, 5, 2, 2, 2, 5, 5, 4};
    int k = 3;
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    FindK(arr, arr_len, k);
}