// Definition (English)
// The scope resolution operator (::) in C++ is used to access a variable, function, or class member belonging to a specific scope, such as a namespace or class.
// Hinglish mein
// Scope Resolution Operator (::) ka use kisi specific scope ke variable, function ya class member ko access karne ke liye hota hai.

#include<iostream>
using namespace std;
int c = 45;
int main(){
    int a,b,c;
    cout<<"\nenter the number of a:\n"<<endl;
    cin>>a;
    cout<<"\nenter the value of b\n"<<endl;
    cin>>b;
    c = a+b;
    cout<<"here is the resultant value c   \n:"<<c<<endl;
      cout<<"here is the the global value c   \n:"<<::c;
}