// #include<iostream>
// using namespace std;

// int main(){
//     // int a = 34;
//     //  cout<<"the value of a is"<<a<<endl;
//     // a = 45;
//     // cout<<"the value of a is"<<a<<endl;
//     // constant in c++
//      const int a = 3;  //const ki value kabhi change nahi hogi aur ye read only variable hai    
//     cout<<"the value of a is"<<a<<endl;
//     a = 45; // you will get an error because a is constant
//     cout<<"the value of a is"<<a<<endl;
    
//     return 0;
// }


// *****************************MANIPULATORS IN CPP*********************************************************
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main() {

//     int a=33,b=48,c=856;

//      cout<<"the value of a is    :"<<a<<endl;
//     cout<<"the value of b is    :"<<b<<endl;
//     cout<<"the value of c is    :"<<c<<endl;

//     cout<<"the value of a is    :"<<setw(4)<<a<<endl;
//     cout<<"the value of b is    :"<<setw(4)<<b<<endl;
//     cout<<"the value of c is    :"<<setw(4)<<c<<endl;



//     return 0;
// }




// ***************************operator precidence in c++***********************************************

#include<iostream>
using namespace std;
int main(){
    int a=3 , b=4;
    int c = (a*5)+b;  // precidence ka means konsa operator sabse phle resolve hoga // cpp reference site
    cout<<c<<endl;

}