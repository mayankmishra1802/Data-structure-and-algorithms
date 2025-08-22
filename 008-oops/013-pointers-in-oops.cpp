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
    customer c("mayank",20,'M');
    customer*cptr=&c; //cptr is pointer of type customer
    (*cptr).print(); //using cptr to print values 
    
    return 0;
}