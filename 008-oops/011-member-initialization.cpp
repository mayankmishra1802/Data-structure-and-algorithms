#include<iostream>
using namespace std;
class customer{
    string name;
    int age;
    char gender;
    public:
    customer(string str,int a ,int g):name(str),age(a),gender(g){
        cout<<"member initialization of data members using semi colon"<<endl;
    }
    void print(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender;
    }
    
};
int main(){
    customer c("mayank",20,'M');
    c.print();

    return 0;
}