#include <iostream>
using namespace std;
int main(){
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