#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(32);
    pq.push(433);
    pq.push(34);
    pq.push(1);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}