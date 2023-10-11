#include<iostream>
using namespace std;

void SortedArray(int arr[], int arr_len){

    int start = 0;
    int end = arr_len-1;

    while(start<end){
        if(arr[start]==arr[end]){
            start++;
        }
        else if (arr[start]!=arr[end])
        {
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            end--;
            start++;
        }
        
    }
}

int main(){
    int arr[] = { 1, 0, 1, 0, 1, 0, 0, 1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    SortedArray(arr, arr_len);
}