// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//         return n*factorial(n-1);

// }

// int febonacci(int n){
//     if(n<2){
//         return 1;
//     }
//     return febonacci(n-2) + febonacci(n-1);
// }


// int main()
// {
//     int n;
//     cout<<"enter the number:  "<<endl;
//     cin>>n;
//     cout<<"febonacci of\n"<<n<<"is"<<febonacci(n)<<endl;
    
//     return 0;
// }


// Task 1: Sum of N Natural Numbers

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if (n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }


// int main()
// {
//     int n;
//     cout<<"enter the number you want to \n"<<endl;
//     cin>>n;
//     cout<<"here is the sum of the number"<<sum(n)<<endl;
//     return 0;
// }


// Task 2: Power of a Number

#include<iostream>
using namespace std;

int power(int n,int c){
    if (c==0 ){
        return 1;
    }
    return n*power(n,c-1);

}
int main()
{
    int n;
    cout<<"enter the value of n : \n"<<endl;
    cin>>n;
    int c;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    cout<<"this is the power of"<<n<<power(n,c)<<endl;
    
    return 0;
}