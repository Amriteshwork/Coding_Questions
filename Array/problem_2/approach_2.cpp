#include<iostream>
using namespace std;


void SortedArray(int arr[], int arr_len){
    int pos = 0;

    for(int i = 0; i<arr_len; i++){
        if(arr[i]==0){
            arr[pos++] = 0;
        }
    }
    for(int i=pos; i<arr_len; i++){
        arr[i] = 1;
    }
}

int main(){
    int arr[] = {1,0,1,0,1,0,0,1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    SortedArray(arr, arr_len);
    for(int i=0; i<arr_len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}