#include<iostream>
using namespace std;

void Majority_Element(int arr[], int arr_len){
    int element = 0;
    int count = 0;
    for(int i=0;i<arr_len;i++){
        if(count==0){
            element = arr[i];
        }
        if(element == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(int i=0; i<arr_len; i++){
        if(element == arr[i]){
            count++;
        }
    }
    if(count>arr_len/2){
        cout<<element<<endl;
    }
}



int main(){
    int arr[] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    Majority_Element(arr, arr_len);
}