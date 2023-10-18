#include<iostream>
using namespace std;

void MoveZero(int arr[], int arr_len){
    int count_nonzero = 0;
    for(int i=0; i<arr_len; i++){
        if(arr[i]!=0){
            arr[count_nonzero++] = arr[i];
        }
    }
    for(int j=count_nonzero; j<arr_len; j++){
        arr[j] = 0;
    }

    for(int k=0; k<arr_len; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MoveZero(arr, arr_len);
}