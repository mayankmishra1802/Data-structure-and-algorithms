#include<iostream>
#include<cstring>
using namespace std;
class customer{
    public:
    char name[100];
    int age;
    char gender;
    customer(){
            cout<<"default constructor"<<endl<<endl;
        }
    customer(char arr[],int a,char g){
        cout<<"paramterized constructor"<<endl;
        strcpy(name,arr);
        age=a;
        gender=g;
        }
    customer(customer &c){
        cout<<"copy constructor"<<endl;
        strcpy(name,c.name);
        age=c.age;
        gender=c.gender;
    }
    void print(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"gender:"<<gender<<endl<<endl;
    }
    ~customer(){  //destructor //automatically called 
        cout<<"object destroyed"<<endl;
    }
};
int main(){
    customer c;
    customer c1("mayank",20,'M');
    c1.print();
    customer c2(c1); 
    c2.print();
    
    return 0;
}