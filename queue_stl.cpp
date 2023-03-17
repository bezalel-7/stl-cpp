#include <iostream>

#include <queue>

using namespace std;


int main(){
    queue<int> q;
    q.push(2);
    q.push(32);
    q.push(424);
    while(!q.empty()){
        cout<<"front "<<q.front()<<" ";
        cout <<"back "<<q.back()<<endl;
        q.pop();
    }
}