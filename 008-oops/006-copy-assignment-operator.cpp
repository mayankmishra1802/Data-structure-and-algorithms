#include<iostream>
#include<cstring>
using namespace std;
class customer{
    public:
    char name[100];
    int age;
    char gender;
    customer(){
        cout<<"default constructor"<<endl;
    }
    customer(char arr[],int a,char g){
        cout<<"paramterized constructor"<<endl;
        strcpy(name,arr);
        age=a;
        gender=g;
    }
    void operator=(customer &c){ 
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
    customer c1("Mayank",20,'M');
    c1.print();
	customer c3; // using default constructor
	c3 = c1; //copy assignment operator
    c3.print();
    return 0;
}