#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int Majority_Element(vector<int> const &nums){
    unordered_map<int, int> map;
    int n = nums.size();
    for(int i=0; i<n; i++){
        map[nums[i]]++;
    }
    for(auto pair: map){
        if(pair.second>n/2){
            cout<<pair.first<<endl;
        }
    }
    return -1;
}


int main(){
    vector<int> input = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    Majority_Element(input);
}
