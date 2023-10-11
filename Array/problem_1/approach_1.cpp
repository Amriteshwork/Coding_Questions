#include<iostream>
using namespace std;

int main(){
    int arr[] = {8, 7, 2, 5, 3, 1, 9};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int target = 10;


    for(int i=0; i<arr_len; i++){
        for(int j=i+1; j<arr_len; j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
