#include<iostream>
using namespace std;


void FindPair(int arr[], int arr_len, int target){

        for(int i=0; i<arr_len; i++){
            for(int j=i+1; j<arr_len; j++){
                if(arr[i]+arr[j]==target){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    return;
                }
            }
        }
    cout<<"Pair not found"<<endl;
    
}



int main(){
    int arr[] = {5, 2, 6, 8, 1, 6, 9};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int target = 12;

    FindPair(arr, arr_len, target);
}
