#include<iostream>
using namespace std;

void MaxSumSubarray(int arr[], int arr_len){
    int sum = INT16_MIN;
    
    for(int i=0; i<arr_len; i++){
        for(int j=i; j<arr_len; j++){
            int temp = 0;
            for(int k=i; k<=j; k++){
                temp+=arr[k];
            }
            if(temp>sum){
                sum=temp;
            }
        }
    }
    cout<<"Maximum Sum of Subarray is: "<<sum<<endl;
}


int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxSumSubarray(arr, arr_len);
}