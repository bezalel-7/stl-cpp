#include <iostream>

using namespace std;

struct node {
    string str;
    int num;
    double doub;
    char x;

    node(string str_,int num_ , double doub_ ,char x_){
       str = str_;
       num = num_;
       doub = doub_;
       x = x_;
    }
    node(){
        
    }
};


int main(){
   double val = 10.0;
   cout << val << endl;
   node dudi;
   dudi.str = "varaprasad";
   dudi.num = 79;
   dudi.doub = 98.4;
   dudi.x = 'a';

   node *raj = new node("dudi",79,94.2,'c');
}