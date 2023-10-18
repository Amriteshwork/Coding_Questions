#include<iostream>
using namespace std;

void MoveZero(int arr[], int arr_len){
    int result[arr_len] = {0};

    int resultIndex = 0;
    for(int i = 0; i < arr_len; i++){
        if(arr[i] != 0){
            result[resultIndex] = arr[i];
            resultIndex++;
        }
    }

    for(int j=0; j<arr_len;j++){
        cout<<result[j]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MoveZero(arr, arr_len);
}