// Task 2: Party Entry System
// Easy–Medium
// User se age aur ID card availability (1 for Yes, 0 for No) input le.
// - Age less than 18 → Entry denied.
// - Age 18 or above AND ID available → Entry allowed.
// - Age 18 or above AND ID unavailable → ID required.
// Concept: && aur || ka use karke dekhna.


#include<iostream>
using namespace std;
int main(){
    int age;
    int id_card;
    cout<<"enter your current age:\n"<<endl;
    cin>>age;
    
    cout<<"enter your id ?? here 1 for yes 0 for no"<<endl;
    cin>>id_card;
    // {
    //     if (id_card = 1){
    //         cout<<"brother id card is required"<<endl;
    //     else if (condition)
    //     {
    //         /* code */
    //     }
    //     {
    //         cout<<
    //     }
             
    //     }
    // }


if(age<18){
    cout<<"entru denied"<<endl;
}
else if(age>18 && id_card = 1){
    cout<<"entry allowed"<<endl;
}
else if(age>=18 || id_card = 0){
    cout<<"id card required"<<endl;
}

return 0;
}