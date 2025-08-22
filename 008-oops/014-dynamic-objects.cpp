#include<iostream>
#include<cstring>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    customer(){
            cout<<"default constructor"<<endl;
        }
    customer(string n,int a,char g){
        cout<<"paramterized constructor"<<endl;
        name=n;
        age=a;
        gender=g;
        }
    void print(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"gender:"<<gender<<endl;
    }
};
int main(){
    customer*c=new customer; //object creation on heap
    customer*c1=new customer("mayank",20,'M'); //object creation and  initialization on heap
    c1->print(); //use -> to access member function using dynamic objects
    customer*c2=new customer;
    //another way of initializing objects on heaps
    c2->name="soumya";
    c2->age=23;
    c2->gender='F';
    c2->print();
    return 0;
}