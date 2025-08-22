#include<iostream>
#include<cstring>
using namespace std;
class customer{
    char name[100];
    int age;
    char gender;
    public:
    void setter(char arr[],int a,char g){ //member function to update data members
        strcpy(name,arr);
        age=a;
        gender=g;
    }  
    void getter(){           //member functions to read/print values of data members
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"gender:"<<gender<<endl<<endl;
    }
};
int main(){
    customer c;
    c.setter("mayank",20,'M');
    c.getter();
    return 0;
}