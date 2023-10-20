#include<iostream>
using namespace std;

void swap(int arr[], int* ptr1, int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void SortByOneSwap(int arr[], int arr_len){
    int* ptr1 = nullptr;
    int* ptr2 = nullptr;
    for(int i=1; i<arr_len;i++){
        if(arr[i-1]>arr[i]){
            if(ptr1==nullptr){
                ptr1 = &arr[i-1];
            }  
            ptr2 = &arr[i];
        }
        
    }
    swap(arr, ptr1, ptr2);
    
    for(int i=0; i<arr_len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {3, 8, 6, 7, 5, 9};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    SortByOneSwap(arr, arr_len);
}

