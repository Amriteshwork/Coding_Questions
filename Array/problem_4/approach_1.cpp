#include<iostream>
using namespace std;

// Function to find equilibrium index in an array
// An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
void EquilibriumIndex(int arr[], int arr_len){
    int pivot = 1;
    
    // If the array length is less than 3, there can be no equilibrium index.
    if(arr_len < 3){
        return;
    }

    // Iterate through the array elements to find equilibrium indexes.
    while(pivot < arr_len){
        int sum1 = 0; // Sum of elements to the left of the pivot.
        int sum2 = 0; // Sum of elements to the right of the pivot.
        
        // Calculate the sum of elements on the left of the pivot.
        for(int i = 0; i < pivot; i++){
            sum1 += arr[i];
        }
        
        // Calculate the sum of elements on the right of the pivot.
        for(int j = pivot + 1; j < arr_len; j++){
            sum2 += arr[j];
        }

        // If the sums on both sides are equal, the current pivot is an equilibrium index.
        if(sum1 == sum2){
            cout << "The Equilibrium Index is: " << pivot << endl;
        }
        pivot++;
    }
}

int main(){
    int arr[] = {}; // Initialize an empty array
    int arr_len = sizeof(arr) / sizeof(arr[0]); // Calculate the array length

    // Call the EquilibriumIndex function to find equilibrium indexes.
    EquilibriumIndex(arr, arr_len);
}
