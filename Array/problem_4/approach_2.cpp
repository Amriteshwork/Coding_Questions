#include<iostream>
using namespace std;

void EquilibriumIndex(int arr[], int arr_len){
    int left[arr_len];
    left[0] = 0;
    for(int i=1; i<arr_len; i++){
        left[i] = left[i-1] + arr[i-1];
    }

    int right = 0;
    for(int j=arr_len-1; j>=0; j--){
        
        if(left[j]==right){
            cout<<"The Equilibrium Index is:"<<j<<endl;
        }
        right += arr[j];
    }
}

int main(){
    int arr[] = {0, -3, 5, -4, -2, 3, 1, 0};
    int arr_len = sizeof(arr) / sizeof(arr[0]); // Calculate the array length

    // Call the EquilibriumIndex function to find equilibrium indexes.
    EquilibriumIndex(arr, arr_len);
}
