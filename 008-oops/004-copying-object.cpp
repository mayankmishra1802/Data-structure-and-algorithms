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
    void print(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"gender:"<<gender<<endl;
    }
};
int main(){
    customer c("mayank",20,'M');
    customer c1=c;  //using copy constructor  //customer c1(c);
    c1.print();
    customer c2; 
    c2=c;         //using copy assignment operator
    c2.print(); 
    return 0;
}