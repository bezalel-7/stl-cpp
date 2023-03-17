#include <iostream>

using namespace std;

int main(){
   pair<int,int> pr;
   pr.first=1;
   pr.second= 2;
   cout<<pr.first;
  pair<int,int> p1 = make_pair(1,3);
pair<int,int> p2 = make_pair(2,4);
pair<pair<int,int>, pair<int,int> > pp = make_pair(p1,p2);


}