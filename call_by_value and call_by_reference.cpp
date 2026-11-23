#include<iostream>
using namespace std;

int sum(int a , int b){
    int c= a+b;
    return c;
}

//this will not swap a and b 
void swap(int a , int b){
    int temp =  a;
    a = b;
    b = temp;

}

// call b y refrence using pointer
void swappointer(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by refernce variable using c++ refernce variables
void swapreferncevar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}



int main()
{
    int a = 4 , b = 5;
    // cout<<"the sum of 4 and 5 is "<<sum(a,b);
    // cout<<"the value of a is:"<<a<<"and the value of b is:"<<b<<endl;
    swappointer(&a,&b);
        cout<<"the value of a is:"<<a<<"and the value of b is:"<<b<<endl;

    swapreferncevar(x,y);

    
    return 0;
}