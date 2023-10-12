#include<iostream>
using namespace std;

void MaxProduct(int arr[], int arr_len){
    int max_product = 0;
    for(int i=0; i<arr_len; i++){
        for(int j=i+1; j<arr_len; j++){
            int temp = arr[i] * arr[j];
            if(temp>=max_product){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                max_product=temp;
            }
        }
    }
    cout<<endl;
}

int main(){
    int arr[] = {-10, -3, 5, 6, -2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxProduct(arr, arr_len);
}