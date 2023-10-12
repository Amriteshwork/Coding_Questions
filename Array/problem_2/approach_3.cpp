#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void SortedArray(int arr[], int arr_len){
    int pivot = 1;
    int j = 0;

    for(int i=0; i<arr_len; i++){
        if(arr[i]<pivot){
            swap(arr, i, j);
            j++;
        }
    }
}

int main(){
    int arr[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    SortedArray(arr, arr_len);
    for(int i=0; i<arr_len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}