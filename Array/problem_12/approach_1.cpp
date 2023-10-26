#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void samesumsubarr(vector<int> arr){
    // cout<<arr.size()<<endl;
    if(arr.size()==1){
        cout<<arr[0];
    }
    int total_sum = accumulate(arr.begin(), arr.end(), 0);
    // cout<<total_sum;
    int current_sum = 0;
    int index = 0;
    for(int i=0; i<arr.size(); i++){
        if(current_sum == total_sum - current_sum){
            index=i;
        }
        current_sum += arr[i];
    }
    for(int j=0; j<index; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for(int k=index; k<arr.size(); k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {6, -4, -3, 2, 3};

    samesumsubarr(arr);
}

// #include <iostream>
// #include <iterator>
// #include <vector>

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4, 5};

//     // Create an ostream_iterator for cout (console output)
//     std::ostream_iterator<int> output_iterator(std::cout, " ");

//     // Use the iterator to write the numbers to the console
//     for (int num : numbers) {
//         *output_iterator = num; // This writes 'num' to cout with a space separator
//     }
//     std::cout<<std::endl;

//     return 0;
// }