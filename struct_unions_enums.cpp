// A structure in C++ is a user-defined data type that groups variables of different data types under a single name.


#include<iostream>
using namespace std;
struct Employee
{
    int eid;
    char favchar;
    float salary;
};





int main()
{
    struct Employee himanshu;
    struct Employee shubham;
    struct Employee harsh;
    himanshu.eid = 1;
    himanshu.favchar = 'c';
    himanshu.salary = 555.55;
    cout<<himanshu.salary<<endl;
    cout<<himanshu.favchar<<endl;
    cout<<himanshu.eid<<endl;
    return 0;
}