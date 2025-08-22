#include<iostream>
#include<cstring>
using namespace std;
class customer{
    char name[100];
    int age;
    char gender;
    public:
    customer(char*arr,int a, char g){
        strcpy(name,arr);
        age=a;
        gender=g;
    }
    void operator>(customer &c){  //takes second operand as an argument
        if(age>c.age){
            cout<<name<<" is older than "<<c.name;
        }
        else if(age<c.age){
            cout<<name<<" is younger than "<<c.name;
        }
        else{
            cout<<"both are equal"<<endl;
        }
    }
    
};
int main(){
    customer c("mayank",20,'M');
    customer c1("soumya",23,'F');
    c>c1;
    return 0;
}