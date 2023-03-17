#include <iostream>
#include <map>
using namespace std;
// map is key-value pair
//map only stores unique keys (overwrites when another same key is pushed inside)
// map is sorted according to keys lexo

namespace dudi{
     void print(map<string, int> mpp){
          for(auto i : mpp){
          cout<<i.first<<"->"<<i.second;
          cout<<endl;
        }
     }
}
// everthng is long(n)
int main(){
   map<string, int> mpp;
   mpp["dudi"] = 32;
   mpp["adhi"] = 1;
   mpp["vamc"] = 323;
   mpp["aneesh"] = 122;
   mpp["dudi"] = 100;
   mpp["mani"] = 32;
   mpp["sasank"] = 223;
   mpp["varshith"] = 32;
   mpp["aadummy"] = 321;
   mpp["aavdummy"] =3234;
   dudi::print(mpp);
   mpp.erase(mpp.begin(),next(mpp.begin(),2));
   cout<<"After deleting:"<<endl;
   dudi::print(mpp);
   cout<<"Is the map empty:";
   cout<<mpp.empty();  
}