#include<iostream>
using namespace std;
class employee
{
public:
       string name;
       employee(string h)
       {
        name = h;
       }    
void display(){
    cout<<"employee:"<<name<<endl; 

}
};
class company
{
public:
       string name;
       employee * emp;
       company(string h , employee * e){
        name = h;
        emp = e;
       }    

void display(){
    cout<<"company name:"<<name<<endl;
    emp->display();

}};

int main()
{   employee e1("himanshu");
    {
        company c1("infosys",&e1);
        c1.display();
    }
    cout<<"after company destruction:";
    e1.display();
    return 0;
}