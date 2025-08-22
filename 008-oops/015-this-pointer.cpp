//this pointer is a pointer that points to an object whose member function is invoked
#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    customer(){
            cout<<"default constructor"<<endl;
        }
    customer(string name,int age,char gender){
        cout<<"paramterized constructor"<<endl;
        this->name=name;
        this->age=age;
        this->gender=gender;
        }
    void print(){
        cout<<"name:"<<this->name<<endl;
        cout<<"age:"<<this->age<<endl;
        cout<<"gender:"<<this->gender<<endl;
    }
};
int main(){
    customer c;
    customer c1("mayank",20,'M');
    c1.print();
    return 0;
}