#include<iostream>
using namespace std;

void MaxSumSubarray(int arr[], int arr_len){
    int sum=0;
    int max_sum = arr[0];
    for(int i=0; i<arr_len; i++){
        sum+=arr[i];
        max_sum = max(max_sum, sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"The maximum sum subarray is: "<<max_sum<<endl;
}

int main(){
    int arr[] = {-7, -3, -2, -4};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxSumSubarray(arr, arr_len);
}