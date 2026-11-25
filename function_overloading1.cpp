// Function Overloading C++ ka ek concept hai jisme hum same naam ke multiple functions bana sakte hain,
//  lekin unke parameters different hone chahiye.

#include<iostream>
using namespace std;
int add(int a, int b){
    cout<<"using function with two argument"<<endl;
    return a+b;
}
int add(int a , int b , int c){
    cout<<" using function with three argument"<<endl;
    return a+b+c;
}
int volume(double r , int h){
    return (3.14 * r * r *h);
}
// for cube
int volume(int a){
    return a*a*a;
}
// rectangular box
int volume (int l , int b , int h)


int main()
{
    cout<<"The sum of 3 and 6 is"<<add(3,6)<<endl;
    cout<<"the sum of 3,7,and 6 is"<<add(3,6,7)<<endl;    
    return 0;
}