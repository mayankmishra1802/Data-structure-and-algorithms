#include<bits/stdc++.h>
using namespace std;
class customer{
    public: //access specifier
    char name[100];  //public data member
    int age;         //public data member
    char gender;     //public data member

    void print_info(){  //public member function
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        cout<<"gender is:"<<gender<<endl;
    }
};
int main(){
    customer c;  //object declaration
    strcpy(c.name,"mayank");  //accessing of data members using object
    c.age=20;
    c.gender='M';
    c.print_info();
    return 0;
}