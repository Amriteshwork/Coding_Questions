#include<iostream>
#include<vector>
using namespace std;

void minabssum(vector <int> arr){
    
    int low = 0;
    int high = arr.size()-1;
    int min = INT16_MAX;
    int i, j;
    for(auto i=low; i<=high; i++){
        if(abs(arr[high]+arr[low])< min){
            min = abs(arr[high]+arr[low]);
            i = low;
            j= high;
        }
        if(min==0){
            break;
        }
        (arr[high]+arr[low]<0)? low++ : high--;
    }
    cout << "pairs are: (" << arr[i] << ", " << arr[j] << ")";

}

int main(){
    vector <int> arr {-6, -5, -3, 0, 2, 4, 9};

    minabssum(arr);
}