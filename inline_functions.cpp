#include<iostream>
using namespace std;
inline int product(int a , int b){
    //not recommended to use below lines with inlines functions 
    // inline tb banate hai jab function me naa ke barabar kaam ho rha ho yaani ki choe codes me
    static int c=0; // this executes only one
    c = c+1; //next time this function is run , the value of c will be retained 
    return a*b+c;
}

float moneyrecieved(int currentmoney , float factor=1.04){
    return currentmoney*factor;

}
int main()
{
    int a , b;
    // cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    // cout<<"the product a and b is"<<product(a,b);
    int money = 1000;
    cout<<"if you have "<<money<<"rs in your bank account recieve"<<moneyrecieved(money)<<"rs after 1 year"<<endl;
    cout<<"for vipif you have "<<money<<"rs in your bank account recieve"<<moneyrecieved(money,1.1)<<"rs after 1 year"<<endl;

    
    return 0;
}