#include <iostream>
#include <unordered_map>
using namespace std;
// only differece from map it is unordered
namespace dudi{
     void print(unordered_map<string, int> umpp){
          for(auto i : umpp){
          cout<<i.first<<"->"<<i.second;
          cout<<endl;
        }
     }
}
int main(){
   unordered_map<string, int> umpp;
   umpp["dudi"] = 32;
   umpp["adhi"] = 1;
   umpp["vamc"] = 323;
   umpp["aneesh"] = 122;
   umpp["dudi"] = 100;
   umpp["mani"] = 32;
   umpp["sasank"] = 223;
   umpp["varshith"] = 32;
   umpp["aadummy"] = 321;
   umpp["aavdummy"] =3234;
   dudi::print(umpp);
   umpp.erase(umpp.begin(),next(umpp.begin(),2));
   if(umpp.find("rdfa") == umpp.end()){
        cout<<"Element not found"<<endl;
   }
   cout<<"After deleting:"<<endl;
   dudi::print(umpp);
   cout<<"Is the map empty:";
   cout<<umpp.empty();  
}
