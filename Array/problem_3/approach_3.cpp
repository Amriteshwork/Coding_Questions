#include<iostream>
#include<climits>
using namespace std;

void MaxProduct(int arr[], int arr_len){
    if(arr_len<2){
        return;
    }
    int max1 = INT32_MIN, max2 = INT32_MIN;
    int min1 = INT32_MAX, min2 = INT32_MAX;

    for(int i=0; i<arr_len; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i]>max2)
        {
            max2 = arr[i];
        }

        if(arr[i]<min1){
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i]<min2)
        {
            /* code */
            min2 = arr[i];
        }
    }
    if((max1*max2)>=(min1*min2)){
            cout<<max1<<" "<<max2<<endl;
            cout<<min1<<" "<<min2<<endl;
        }
        if((max1*max2)<(min1*min2)){
        cout<<min1<<" "<<min2<<endl;
        }
        if((max1*max2)<(min1*min2)){
        cout<<max1<<" "<<max2<<endl;
        }
}


int main(){
    int arr[] = {-10, -3, 5, 6, -2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    MaxProduct(arr, arr_len);
    return 0;
}
