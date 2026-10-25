// what is pointer ---> pointer is data type which holds the address of other data types
#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int*b = &a;
        //  &  ---> address of operator

    cout<<"the adress of a is:"<<b<<endl;
    cout<<"the adress of a is:"<<&a<<endl;

    //  &  ---> derefernce operator (agar hame pata lagaa hai ki kya value usme store hai to ham derefrence ka use krege)
        cout<<"the adress of a is:"<<*b<<endl;

    return 0;
}