#include<iostream>
#include<algorithm>
using namespace std;

void sorted_array(int arr[], int arr_len){
    sort(arr, arr+arr_len);
}

void FindK(int arr[], int arr_len, int k){
    sorted_array(arr, arr_len);

    int low = 0;
    int high = arr_len-1;
    while(low<high){
        if(arr[high] - arr[low] == k || arr[low] - arr[high] == k){
            cout<<arr[low]<<" "<<arr[high]<<endl;
            low++;
        }
        if(arr[high]-arr[low] > k){
            high--;
        }
        else{
            low++;
            high++;
        }
    }
}

int main(){
    int arr[] = {1, 5, 2, 2, 2, 5, 5, 4};
    int k = 3;
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    FindK(arr, arr_len, k);

}


/* not work for other case*/