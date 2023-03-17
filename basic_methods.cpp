#include <iostream>
#include <vector>
#include <array>
#include <numeric>
using namespace std;

int main(){
    array<int ,10> arr;
    arr.fill(40);
    vector<int> vec; 
    for(int i=0;i<5;i++){
        vec.push_back(i);
    }
    cout<<"The sum of the all array:";
    int count_ = count(vec.begin(),vec.end(),1);
    cout<<count_;


}

