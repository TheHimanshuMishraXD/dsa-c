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
// so lets we go to talk about pointer to pointer concept usually isme 2 se represent krte hai 
     int **c= &b;
     cout<<"this is the address of b is" <<&b<<endl; 
       cout<<"this is the address b is" <<c<<endl; 
         cout<<"this is the value  of c is " <<*c<<endl; 
           cout<<"the value at address value at (value at (c))" <<**c<<endl; 
    return 0;
}