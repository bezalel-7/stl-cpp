#include <iostream>
#include <stack>

using namespace std;

int main(){
   stack<int> stc;
   stc.push(32);
   stc.push(323);
   stc.push(1);
   while(!stc.empty()){
     cout<<stc.top()<<" ";
     stc.pop();
   }
}