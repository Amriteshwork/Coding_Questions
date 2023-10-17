#include<iostream>
using namespace std;

int Majority_Element(int arr[], int arr_len){
   
    for(int i=0; i<arr_len/2;i++){
        int count = 1;
        for(int j=i+1; j<arr_len;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>arr_len/2){
            cout<<arr[i]<<endl;
        }
        
    }
    return -1;
    
}


int main(){
    int arr[] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    Majority_Element(arr, arr_len);
}