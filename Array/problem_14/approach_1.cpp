#include<iostream>
#include<vector>
using namespace std;

void findminindex(vector<int> arr){
    int index = -1;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]==arr[j]){
                index = i;
                break;
            }
        }
        if(index!= -1){
            break;
        }

    }
    cout<<index<<endl;
}

int main(){
    vector <int> arr = { 5, 6, 3, 4, 3, 6, 4 };
    findminindex(arr);
}

