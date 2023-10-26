#include<iostream>
#include<cmath>
#include<limits>
#include<algorithm>
using namespace std;

void findabsdistance(int arr[], int arr_len, int x, int y){
    if(arr_len<=1){
        cout<<"The array has only one element";
    }
    int index_x, index_y = arr_len;
    int abs_min_distance = INT16_MAX;
    
    for(int i=0; i<arr_len; i++){
        if(arr[i]==x){
            index_x = i;

            if(index_y != arr_len){
                abs_min_distance =  min(abs_min_distance, abs(index_x - index_y));
            }
        }
        if(arr[i]==y){
            index_y = i;
        }
        if(index_x!=arr_len){
            abs_min_distance = min(abs_min_distance, abs(index_x - index_y));
        }
    }
    cout<<abs_min_distance<<endl;
}

int main(){
   int arr[] = {1, 3, 5, 4, 8, 2, 4, 3, 6, 5 };
   int arr_len = sizeof(arr)/sizeof(arr[0]);
   int x = 3;
   int y = 2;

   findabsdistance(arr, arr_len, x, y);
}
