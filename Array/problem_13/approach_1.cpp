#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int, int> findpair(vector<int> arr){
    if(arr.size()<=1){
        cout<<"Please increase the size of the array"<<endl;
    }
    sort(arr.rbegin(), arr.rend());
    int x = 0;
    for(int i=0; i<arr.size(); i=i+2){
        x = x*10+arr[i];
    }
    int y = 0;
    for(int j=1; j<arr.size(); j=j+2){
        y = y*10+arr[j];
    }

    return make_pair(x,y);
}


int main(){
    vector<int> arr = {4, 6, 2, 7, 9, 8 };

    pair<int, int> numbers = findpair(arr);
    cout<<"The Numbers are"<<" "<<numbers.first<<" and "<<numbers.second<<endl;

    return 0;
}


