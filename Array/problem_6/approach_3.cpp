#include<iostream>
using namespace std;


void swap(int arr[], int i, int count_nonzero){
    int temp = arr[i];
    arr[i] = arr[count_nonzero];
    arr[count_nonzero] = temp;

}

void MoveZero(int arr[], int arr_len){
    int count_nonzero = 0;
    for(int i=0; i<arr_len; i++){
        if(arr[i]!=0){
            swap(arr, i, count_nonzero);
            count_nonzero++;
        }
    }
    for(int j=0; j<arr_len; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MoveZero(arr, arr_len);
}