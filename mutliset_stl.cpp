#include <iostream>
#include <set>
// set contain multiset also
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(23);
    ms.insert(32);
    ms.insert(42);
    //multi set allows duplicates also 

    //advantage
    // ms.erase(1);
    ms.erase(ms.find(1),next(ms.find(1),2));
    // all the instance of one will be erased
    for(auto i:ms){
        cout<<i<<" ";
    }
}


