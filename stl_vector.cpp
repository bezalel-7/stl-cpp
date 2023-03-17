#include <iostream>
#include <vector>
#include <array> 
using namespace std;

int main(){
   vector<int> vec(4,0);
   cout<< vec.size() << endl;
   vec.push_back(0);
   vec.push_back(1);
   cout << vec.size() << endl;
   vec.push_back(2);
   vec.pop_back();
   cout << vec.size() << endl;

   vector<int> vec1(vec.begin(),vec.begin()+2);
   vec1.swap(vec);
   vector< vector<int> > vec02;
   vec02.push_back(vec);
   vec02.push_back(vec1);
   int i=32;
//    array <int,5> ar;
//    ar.fill(5);
//    vec02.emplace_back(vector<int>({2,3,4,2}));
   for(auto it:vec02){
       for(auto itt:it){
         cout<<itt<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
   vector<vector<int > > vec03(10,vector<int> (20,0));
   for(auto itr:vec03){
       for(auto it:itr){
          cout<<it<<" ";
       }
       cout<<endl;
   }
}