// what is pointer ---> pointer is data type which holds the address of other data types
#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int*b = &a;
    cout<<"the adress of a is:"<<b<<endl;
    cout<<"the adress of a is:"<<a<<endl;

    //  &  ---> address of operator
    return 0;
}