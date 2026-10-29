// // A structure in C++ is a user-defined data type that groups variables of different data types under a single name.


// #include<iostream>
// using namespace std;
// typedef struct Employee
// {
//     int eid;
//     char favchar;
//     float salary;
// } ep;
// // here agar hame yaha par short karna ho kisi bhi structure just like employee ko to apn type def use kr skte ho to 
// // employee ko apn convert kar skte hai ep ya kisi bhi given keyword me
// // nahi to struct use krege



// int main()
// {
//     ep himanshu;
//     ep shubham; // idhr pe ham struct ko use krke ep laga dege type def karke struct Employee
//     ep harsh;
//     himanshu.eid = 1;
//     himanshu.favchar = 'c';
//     himanshu.salary = 555.55;
//     cout<<himanshu.salary<<endl;
//     cout<<himanshu.favchar<<endl;
//     cout<<himanshu.eid<<endl;
//     return 0;
// }

// THIS IS FOR THE UNION IN The cpp



// #include<iostream>
// using namespace std;
// typedef struct Employee
// {
//     int eid;
//     char favchar;
//     float salary;
// }ep;

// union money
// {
//     int rice;
//     char car;
//     float pounds; // unions stands for better memory management
// };


// int main()
// { union money m1;
//     m1.rice = 45;
//     m1.car = 'c';
//     cout<<m1.rice<<endl;
//     // cout<<m1.car<<endl;
    
//     return 0;
// }

// enum -- >Exam tip: Enum ka use related constant values ko meaningful names dene ke liye hota hai.
#include<iostream>
using namespace std;

int main()
{
    enum Meal{breakfast,lunch,dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}