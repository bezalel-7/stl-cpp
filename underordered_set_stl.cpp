#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
  unordered_set<int> ust;
  ust.insert(1);
  ust.insert(2);
  ust.insert(442);
  ust.insert(2);
  //same as set but averge time complex is 0(1)
  //tle -> switch to set
  //worst case is linear in nature
  for(auto i=ust.begin();i!=ust.end();i++){
     cout<<*i<<" "; 
  } 
  cout<<endl;
  // converting set into vector
  vector<int> vec(ust.begin(),ust.end());
  for(auto i:vec){
    cout<<i;
  }
}