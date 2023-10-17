#include<iostream>
using namespace std;

// Function to find equilibrium index in an array
// An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
void EquilibriumIndex(int arr[], int arr_len){
    int pivot = 0;
    // Iterate through the array elements to find equilibrium indexes.
    while(pivot < arr_len){
        int sum1 = 0; 
        int sum2 = 0; 
        

        for(int i = 0; i < pivot; i++){
            sum1 += arr[i];
        }
        
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
    int arr[] = {0, -3, 5, -4, -2, 3, 1, 0};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    // Call the EquilibriumIndex function to find equilibrium indexes.
    EquilibriumIndex(arr, arr_len);
}
