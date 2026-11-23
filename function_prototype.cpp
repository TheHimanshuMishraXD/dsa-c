
// Function Prototyping in C++ is the process of declaring a function before its actual definition.

// 
// Bhai, Function Prototyping compiler ko pehle se batata hai ki aage code mein
//  kaunsa function banne wala hai aur woh kaise kaam karega.


#include<iostream>
 using namespace std;

//  function prototype
// type function-name (arguments);
int sum(int a , int b); // ye batata hai ki aage sum name ka function aane wala hai 
 
int sum(int a , int b){
    int c = a+b;
    return c;

}


 int main()
 {
    int num1 ,num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    //here num 1 and num2 is actual parameter
    cout<<"the sum is"<<sum(num1 , num2)<<endl;
    return 0;

 }

 int sum(int a , int b){
    // formal parameter a and b will be taking values  frim actual  parameters num1 and num2
    int c = a+b;
    return c;

}