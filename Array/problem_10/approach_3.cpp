#include<iostream>
#define MAX 10000
using namespace std;

void FindK(int arr[], int arr_len, int k){
    bool hashmap[MAX] = {false};

    for(int i=0; i<arr_len; i++){
        hashmap[arr[i]] = true;
    }

    for(int i=0; i<arr_len; i++){
        int curr_element = arr[i];
        if(curr_element - k >= 0 && hashmap[curr_element-k]){
            cout<<curr_element<<", "<<curr_element-k<<endl;
        }
        if(curr_element + k < MAX && hashmap[curr_element+k]){
            cout<<curr_element+k<<", "<<curr_element<<endl;
        }
        hashmap[curr_element] = false;
    }
}


int main(){
    int arr[] = {1, 5, 2, 2, 2, 5, 5, 4};
    int k = 3;
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    FindK(arr, arr_len, k);
}