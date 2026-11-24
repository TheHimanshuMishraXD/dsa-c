#include<iostream>
using namespace std;
inline int product(int a , int b){
    return a*b;
}
int main()
{
    int a , b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product a and b is"<<product(a,b);
    
    return 0;
}