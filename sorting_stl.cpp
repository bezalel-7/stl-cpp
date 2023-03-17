#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(){
    array<int ,10> arr;
    for(int i=0;i<10;i++){
        arr.at(i) = 10 - i;
    }

    sort(arr.begin(),arr.begin()+5);
    for(int i =0 ;i<10;i++){
        cout<<arr.at(i)<<" ";
    }

}