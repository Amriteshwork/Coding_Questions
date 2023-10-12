#include<iostream>
using namespace std;

void SortedArray(int arr[], int arr_len){

    int count_zero = 0;
    for(int i=0; i<arr_len; i++){
        if(arr[i]==0){
            count_zero++;
        }
    }
    int pos = 0;
    while(count_zero!=0){
        arr[pos++] = 0;
        count_zero--;
    }
    while(pos<arr_len){
        arr[pos++] = 1;
    }
}

int main(){
    int arr[] = { 1, 0, 1, 0, 1, 0, 0, 1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    SortedArray(arr, arr_len);
    for(int i=0; i<arr_len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

