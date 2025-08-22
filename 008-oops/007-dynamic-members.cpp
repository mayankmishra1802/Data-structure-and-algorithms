#include<iostream>
#include<cstring>
using namespace std;
class customer{
    public:
    char*name;
    int age;
    char gender;
    customer(char*arr,int a,char g){
        name=new char[100]; //memory allocation on heap
        strcpy(name,arr);
        age=a;
        gender=g;
    }
    customer(customer &c){   //copy constructor
        name=new char[100]; //memory allocation on heap
        strcpy(name,c.name);
        age=c.age;
        gender=c.gender;
    }
    void print(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"gender:"<<gender<<endl<<endl;
    }
};
int main(){
    customer c("mayank",20,'M');
    c.print();
     customer c1(c);
    c1.print();
    return 0;
}