#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,3> arr;
    arr.fill(5);
    cout<< arr.at(0);
    for(auto i:arr){
        cout<<i;
    }
}