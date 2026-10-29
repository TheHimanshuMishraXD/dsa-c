// A structure in C++ is a user-defined data type that groups variables of different data types under a single name.


#include<iostream>
using namespace std;
typedef struct Employee
{
    int eid;
    char favchar;
    float salary;
} ep;
// here agar hame yaha par short karna ho kisi bhi structure just like employee ko to apn type def use kr skte ho to 
// employee ko apn convert kar skte hai ep ya kisi bhi given keyword me
// nahi to struct use krege



int main()
{
    ep himanshu;
    struct ep shubham;
    struct ep harsh;
    himanshu.eid = 1;
    himanshu.favchar = 'c';
    himanshu.salary = 555.55;
    cout<<himanshu.salary<<endl;
    cout<<himanshu.favchar<<endl;
    cout<<himanshu.eid<<endl;
    return 0;
}