//We can avoid using extra space. The idea is to calculate the sum of all the array elements. 
//Then start from the last item of the array and maintain the right subarray sum. We can calculate 
//the left subarray sum in constant time by subtracting the right subarray sum and current element from the total sum, i.e.,
//Sum of left subarray A[0…i-1] = total – (A[i] + sum of right subarray A[i+1…n-1])

#include<iostream>
#include <numeric>
using namespace std;

void EquilibriumIndex(int arr[], int arr_len){
    int total = accumulate(arr, arr+arr_len, 0);
    int right = 0;
    for(int i=arr_len-1; i>=0; i--){
        if(right==total-(arr[i]+right)){
            cout<<"Equilibrium index is: "<<i<<endl;
        }
        right+=arr[i];
    }
}


int main(){
    int arr[] = {0, -3, 5, -4, -2, 3, 1, 0};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    // cout<<arr<<endl;
    // cout<<accumulate(arr, arr+arr_len, 0)<<endl;
    EquilibriumIndex(arr, arr_len);
}