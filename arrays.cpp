// #include<iostream>
// using namespace std;

// int main()
// {   
//     int marks[5] = {24,45,66,17,23};
//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;
//     // cout<<marks[2]<<endl;
//     // cout<<marks[3]<<endl;
//     // int mathmarks[4];
//     // mathmarks[0] = 2245;
//     // mathmarks[1] = 7489;
//     // mathmarks[2] = 897;
//     // mathmarks[3] = 698;
//     // cout<<mathmarks[0]<<endl;
//     // mathmarks[1] = 564;
//     // cout<<mathmarks[1]<<endl;

//     // for(int i=0;i<4;i++){
//     //     cout<<marks[i]<<endl;

//     // }
// //here we do this using while loop
//    int  i = 0;
//     while(i<4){
   
//     cout<<marks[i]<<endl;
//      i = i + 1;
//     }


//     return 0;
// }


// pointers and arrays

#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {24,45,66,17,23};
    int *p = marks;
    // cout<<"the value of marks[p+0] is "<<*p<<endl;;
    //     cout<<"the value of marks[p+1] is "<<*(p+1)<<endl;;
    // cout<<"the value of marks[p+2] is "<<*(p+2)<<endl;;
    cout<<*(p++)<<endl;;
    cout<<*(++p)<<endl;
    cout<<*p;

    return 0;
}