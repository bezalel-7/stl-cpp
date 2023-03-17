#include <iostream>
#include <set>
#include <iterator>
using namespace std;
//set :- unique values

int main(){
set<int> st;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.insert(x); //log(container_size)
}

// you cant do this in set 
// for(auto i:st){
//     cout<<i<<" ";
// }

//you can only use iterators for the set in cpp
st.insert(0);
for(auto i=st.begin();i!=st.end();i++){
     cout<< *i<<" ";
}
cout<<endl;
// erase set
//log n
// st.erase(st.begin());
auto itr = st.begin();
itr++;
st.erase(st.begin(),next(st.begin(),2));

for(auto i=st.begin();i!=st.end();i++){
     cout<< *i<<" ";
}
// set find
cout<<"set1"<<endl;
set<int> st1;
st1.insert(2);
st1.insert(23);
st1.insert(1);



auto it0 = st1.find(1);

// auto it = st1.find(32);
cout<<distance(st1.begin(),it0);

}
