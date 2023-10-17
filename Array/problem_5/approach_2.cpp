#include<iostream>
#include<algorithm>
using namespace std;

void Majority_Element(int arr[], int arr_len){
    for(int i=0; i<arr_len/2; i++){
        int count_element = count(arr, arr+arr_len, arr[i]);
        if(count_element>(arr_len/2)){
            cout<<"Majority element: "<<arr[i]<<" "<<endl;
        }

    }
}

int main(){
    int arr[] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    Majority_Element(arr, arr_len);
}