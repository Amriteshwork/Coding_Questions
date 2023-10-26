#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

void findminindex(vector <int> arr){
    int min_index = -1;
    unordered_set <int> set;
    for(int i=arr.size()-1; i>=0; i--){
        if(set.find(arr[i]) != set.end()){
            min_index=i;
        }
        else{
            set.insert(arr[i]);
        }
    }
    if(min_index==-1){
        cout<<"Invalid"<<endl;
    }
    else{
        cout<<min_index<<endl;
    }
    

}

int main(){
    vector<int> arr = {1,2,3,4,5};

    findminindex(arr);
}