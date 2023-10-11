#include<iostream>
#include<algorithm>
using namespace std;


int* SortArray(int arr[], int arr_len){
    sort(arr, arr + arr_len);
    return arr;
    
}


void FindPair(int arr[], int arr_len, int target){
    int* sorted_arr = SortArray(arr, arr_len);
    int low = 0;
    int high = arr_len-1;

    while(low<high){
        if(arr[low] + arr[high] == target){
            cout<<arr[low]<<" "<<arr[high]<<endl;
            return;
        }
        else if (arr[low] + arr[high] < target)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
}


int main(){
    int arr[] = {8, 7, 2, 5, 3, 1};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int target = 10;

    FindPair(arr, arr_len, target);
}
