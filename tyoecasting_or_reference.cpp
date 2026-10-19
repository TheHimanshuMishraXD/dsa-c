// Definition (English)
// The scope resolution operator (::) in C++ is used to access a variable, function, or class member belonging to a specific scope, such as a namespace or class.
// Hinglish mein
// Scope Resolution Operator (::) ka use kisi specific scope ke variable, function ya class member ko access karne ke liye hota hai.

// #include<iostream>
// using namespace std;
// int c = 45;
// int main(){
//     // int a,b,c;
// //     cout<<"\nenter the number of a:\n"<<endl;
// //     cin>>a;
// //     cout<<"\nenter the value of b\n"<<endl;
// //     cin>>b;
// //     c = a+b;
// //     cout<<"here is the resultant value c   \n:"<<c<<endl;
// //       cout<<"here is the the global value c   \n:"<<::c;

// float d=34.4f;
// long double e = 34.4;
// cout<<"here is the size of 34.4f is   :"<<sizeof(34.4f)<<endl;
// // 34.4f; //here f is denode to floating point number and l denodes too long double
// cout<<"the value of d is"<<d<<endl<<"the value of e is"<<e<<endl;
// return 0;

//      }     



// ************************** build in data types **********************************************

// 
//('''Definition of Reference Variable in C++:
// A reference variable is an alternative name (alias) for an existing variable. 
// It is declared using the & symbol and must be initialized when declared.''')
// #include<iostream>
// using namespace std;
// int main() {
// float x = 45.5;
// float & y = x;
// cout<<x<<endl;
// cout<<y<<endl;
// return 0;
// }



// ******** typecasting*************************
#include<iostream>
using namespace std;
int main() {
int a = 45;
float b = 42.8;
cout<<"the value of a is   :"<<(float)a<<endl;
cout<<"the value of b is   :"<<(int)b<<endl;
int c = int (b);

cout<<"the expression is"<<a+ (int)b<<endl;
cout<<"the expression is"<<a+ int(b)<<endl;
return 0;
}



// Practice Program: Student Marks Calculator
// Task: Ek C++ program bana jo ye concepts use kare:
// - Global aur local variable (::)
// - Reference variable (&)
// - Typecasting (int, float)
// - sizeof() operator
// Expected output
// Global value of marks: 90
// Enter your marks: 75
// Original marks: 75
// Updated marks: 80
// Float value: 80.5
// Integer conversion: 80
// Size of float: 4


// Note: sizeof(float) usually 4 bytes hota hai.
// Tere liye hints 🧠
// 1. Global variable marks = 90 declare kar.
// 2. main() mein local variable marks bana aur user se input le.
// 3. ::marks use karke global variable print kar.
// 4. int &ref = marks; se reference variable bana.
// 5. ref = 80; karke original variable ki value change kar.
// 6. float value ko int mein typecast kar.
// 7. sizeof() se float ka size print kar.


#include<iostream>
using namespace std;
int marks = 90;
int main(){
    int marks;
    cout<<"enter your marks"<<endl;
    cin>>marks;
    cout<<"here is your marks"<<::marks<<endl;
    int &ref = marks;
    ref = 80;
    cout<<"here is your float value is typecast to int"<<(int)marks<<endl;
    cout<<"here is your size of ref"<<sizeof(ref)<<endl;

}