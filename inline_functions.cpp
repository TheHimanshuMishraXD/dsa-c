#include<iostream>
using namespace std;
inline int product(int a , int b){ // inline tb banate hai jab function me naa ke barabar kaam ho rha ho yaani ki choe codes me
    static int c=0; // this executes only one
    c = c+1;
    return a*b+c;
}
int main()
{
    int a , b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product a and b is"<<product(a,b);
    
    return 0;
}