#include <iostream>

#include <deque>

using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(4);
    dq.push_front(3);
    dq.push_front(2);
    dq.push_front(1);
    cout<<"The size of the deque is"<<dq.size()<<endl;
    // deque is not a qeue its mix of stack and queue so you dnt find pop and push
    for(auto i:dq){
        cout<<i<<" ";
    }
}