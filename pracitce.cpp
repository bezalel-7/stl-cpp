#include <iostream>

#include <set>

using namespace std;
// program to count max occurance of elements
int main(){
   multiset<int> ms;
   int n;
   cout<<"Enter the size of the input array:";
   cin>>n;
   cout<<"Enter the elements of array:";
   for(int i=0;i<n;i++){
       int k;
       cin>>k;
       ms.insert(k);
   } 
   int max=-9999,max_ele=0;  
   while(ms.size() > 0){
     auto h = ms.begin();
     int temp_max = ms.count(*h);
     if(temp_max > max){
        max_ele = *h;
        max = temp_max; 
     }
    ms.erase(h,next(h,temp_max));
   }

   cout<<max_ele<<"->"<<max;
} 