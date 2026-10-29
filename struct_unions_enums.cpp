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
    himanshu.eid = 1;
    himanshu.favchar = "c";
    himanshu.salary = 555.55;
    return 0;
}