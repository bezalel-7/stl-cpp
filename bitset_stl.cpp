#include <iostream>

#include <bitset>

using namespace std;

int main(){
    // bitset<5> bt(4);
    // bitset<8> bt1(10);
    // bitset<8> bt2; //00000000
    // //function of bitset
    // // all
    // cout<<"Are all the bits in the bt are set(one): "<<bt.all()<<endl; // returns(all the bits are ones or not) -> false
    // // any
    // cout<<"Is any one of the bits in the bt is set(one):"<<bt.any()<<endl; //return(for there exist 1 one in the bits) -> true
    // // set
    // cout<<bt<<"->";
    // bt.set(0);
    // // you can also do
    // cout<<bt<<"->";
    // bt.set(0,0);
    // // set zero the idex from back to 1
    // bt2.set(); // setting all the bt2 to 1
    // cout<<bt<<endl;
    // // reset
    // //setting all the bits to 0
    // bt2.reset();
    // bt2.reset(0);//000000001
    // // flip
    // cout<<"before flip:"<<bt1<<"   ";
    // bt1.flip();
    // cout<<"After flip:"<<bt1<<endl;
    // // none
    // // bt.none() 000000->true 100000->false 
    // // count
    // //counts the number of ones in the bit
    // cout<<bt.count()<<endl;
    // // size
    // cout<<bt.size();
    // // test
    // //check weather the bit is true or false
    // cout<<bt.test(2); // ture because for 4 index is 1
 
 // program to add two numbers
    cout<<"Enter the number1 and number2:";
    int n1,n2;
    cin>>n1>>n2;
    bitset<8> arr[3];
    arr[0] = n1;
    arr[1] = n2;
    arr[2].reset();
    cout<<arr[0] <<"+" << arr[1]<<" = ";
    int carry = 0;
    for(int i=0;i<8;i++){
       int temp1 = arr[0].test(i);
       int temp2 = arr[1].test(i);
       int dig_setter = temp1 + temp2 + carry;
       arr[2].set(i,dig_setter%2);
       if(dig_setter > 1) carry = 1;
    }  
    cout<<arr[2];
}