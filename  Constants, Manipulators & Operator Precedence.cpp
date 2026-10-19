#include<iostream>
using namespace std;

int main(){
    // int a = 34;
    //  cout<<"the value of a is"<<a<<endl;
    // a = 45;
    // cout<<"the value of a is"<<a<<endl;
    // constant in c++
     const int a = 3;  //const ki value kabhi change nahi hogi aur ye read only variable hai    
    cout<<"the value of a is"<<a<<endl;
    a = 45; // you will get an error because a is constant
    cout<<"the value of a is"<<a<<endl;
    
    return 0;
}