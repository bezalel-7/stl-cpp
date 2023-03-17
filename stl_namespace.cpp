#include <iostream>
using namespace std;

namespace dudi{
  int val = 50;
  int getVal(){
    return val*10;
  }
}

int main(){
    double val = 50.0;
    cout << val << endl;

    cout << dudi::getVal() << endl;
}

