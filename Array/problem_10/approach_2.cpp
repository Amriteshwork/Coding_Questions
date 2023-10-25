#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

void FindK(int arr[], int arr_len, int k){
    multiset<int> set;

    for(int i = 0; i<arr_len; i++){
        if(set.find(arr[i] - k) != set.end()){
            cout<<arr[i]<<", "<<arr[i]-k<<endl;
        }
        if(set.find(arr[i] + k) != set.end()){
            cout<<arr[i]+k<<", "<<arr[i]<<endl;
        }
        set.insert(arr[i]);
    }
}


int main(){
    int arr[] = {1, 5, 2, 2, 2, 5, 5, 4};
    int k = 3;
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    FindK(arr, arr_len, k);
}