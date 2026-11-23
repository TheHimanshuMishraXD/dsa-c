
// Function Prototyping in C++ is the process of declaring a function before its actual definition.


#include<iostream>
 using namespace std;

//  function prototype
 
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
    cout<<"the sum is"<<sum(num1 , num2)<<endl;
    return 0;

 }