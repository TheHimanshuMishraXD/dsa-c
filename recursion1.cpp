#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
        return n*factorial(n-1);

}

int febonacci(int n){
    if(n<2){
        return n;
    }
    return febonacci(n-2) + febonacci(n-1);
}


int main()
{
    int n;
    cout<<"enter the number:  "<<endl;
    cin>>n;
    cout<<"f of"<<n<<"is"<<factorial(n)<<endl;
    
    return 0;
}