#include<iostream>
#include<algorithm>
using namespace std;

void SortArray(int arr[], int arr_len){
    sort(arr, arr+arr_len);
}

void MaxProduct(int arr[], int arr_len){
    if(arr_len<2){
        return;
    }
    SortArray(arr, arr_len);
    int temp = arr[arr_len-1] * arr[arr_len-2];
    if(arr[0] * arr[1] >= temp){
        cout<<arr[arr_len-1]<<" "<<arr[arr_len-2]<<endl;
        cout<<arr[0]<<" "<<arr[1]<<endl;
    }
    else{
        cout<<arr[arr_len-1]<<" "<<arr[arr_len-2]<<endl;
    }
    cout<<endl;
    
} 


int main(){
    int arr[] = {-10, -3, 5, 6, -2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxProduct(arr, arr_len);
    return 0;
}