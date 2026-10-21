#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your current age:\n"<<endl;
cin>>age;
if (age<18){
    cout<<"you cannot come in out party"<<endl;
}
else if (age==18){
    cout<<"you are a lid and you have access in the party via using kids card"<<endl;
}

else {
    cout<<"You have fully access to come in the party"<<endl;
}
    return 0;
}