#include <iostream>
#include <array>
#include <deque>
#include <vector>

using namespace std;

int main(){
    array<int, 10> arr;
    arr.fill(5);
    vector<int> vec;
    for(int i=0;i<10;i++){
        vec.push_back(i);
    }
    int maxi_arr = *max_element(arr.begin(),arr.end());
    cout<<maxi_arr<<endl;
    
    int maxi_vec = *max_element(vec.begin(),vec.end());
    cout<<maxi_vec<<endl;

    deque<int> dq;
    for(int i=0;i<5;i++){
        dq.push_back(i);
    }
    int maxi_dq = *max_element(dq.begin(),dq.end());
    cout<<maxi_dq;


}