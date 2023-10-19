#include<iostream>
using namespace std;

void MaxSumSubarray(int arr[], int arr_len){
    int maxsum = INT16_MIN;
    for(int i=0; i<arr_len; i++){
        int sum=0;
        for(int j=i; j<arr_len; j++){
            sum+=arr[j];
            if(sum>maxsum){
            maxsum=sum;
        }
        }
    }
    cout<<"The maximum sum subarray is: "<<maxsum<<endl;
}


int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxSumSubarray(arr, arr_len);
}