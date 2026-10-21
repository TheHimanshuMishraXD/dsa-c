// Task 1: Age Checker
// Easy
// User se age input le aur conditions ke according output de:
// - Age less than 0 → Invalid age
// - Age 0 → You are just born
// - Age 1–17 → You are a minor
// - Age 18 → You just became an adult
// - Age greater than 18 → You are an adult


#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age bro:\n"<<endl;
    cin>>age;

if (age<0){
    cout<<"entered age is not valid"<<endl;
}
else if (age==0){
    cout<<"you are just born brother chill!!!!"<<endl;
}
else if (age<18){
    cout<<"you are currently minor"<<endl;

}
else if (age == 18){
    cout<<"you are just became adult"<<endl;
}
else{
    cout<<"you are an adult"<<endl;
}

return 0;
}
 
