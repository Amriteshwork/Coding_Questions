#include<iostream>
#include<algorithm>
using namespace std;

void sorted_array(int arr[], int arr_len){
    sort(arr, arr+arr_len);
}

void MaxProdSubset(int arr[], int arr_len){
    if(arr_len==1){
        cout<<"Max Product: "<<arr[0]<<endl;
    }
    
    sorted_array(arr, arr_len);

    int count = 0;
    int product = 1;

    for(int i=0; i<arr_len; i++){
        if(arr[i]<0){
            count++;
        }
        if(arr[i]>0){
            product *= arr[i];
        }
    }
    if(count%2==0){
        for(int j=0; j<count; j++){
            product *= arr[j];
        }
    }

    if(count%2!=0){
        for(int k=0; k<count-1; k++){
            product*= arr[k];
        }
    }
    cout<<"Maximum Product Subset: "<<product<<endl;
}


int main(){
    int arr[] = { -4, -8, -5, -8 };
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxProdSubset(arr, arr_len);
}