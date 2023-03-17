#include <iostream>
#include <array>
using namespace std;

int main(){
    // array<int,3> arr;
    // arr.fill(5);

    // iterators 
    // begin(),end(),rbegin(),rend()
    // for(auto i=arr.begin();i!=arr.end();i++){
    //     cout<<*i;
    // }
    array<int,5> arr;
    for(int i=0;i<5;i++){
        arr.at(i) = i+1;
    }

    for(auto i = arr.rbegin();i!= arr.rend();i++){
      cout<<*i;
    } 
    cout<<endl;
    for(auto i=arr.rend()-1;i >= arr.rbegin(); i--){
        cout<<*i;
    }
     string s = "fkjdsfkpds";

    cout << s.back();
    s.at(3) = '3';
    for(auto c:s){
        cout<<c<<" ";
    }
    cout<<s.data();
    cout<<endl;
    // s.erase(s.begin()+2,s.end()-3);
    cout<<"string "<<s;
    cout<<isdigit(s[3]);
        

}