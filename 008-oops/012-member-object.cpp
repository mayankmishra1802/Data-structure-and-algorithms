#include<iostream>
#include<cstring>
using namespace std;
class card{
    public:
    string ccn,dcn;
    card(){
        cout<<"defalut construtor of class card"<<endl;
    }
    card(string c,string d ){
        ccn=c;
        dcn=d;
    }
};
class customer {
    public:
		string name;
		int age;
		char gender;
        card obj;  //member object
        customer(string n,int a,char g,string c,string d){
            name=n;
            age=a;
            gender=g;
            obj.ccn=c;
            obj.dcn=d;
        }
		void print() {
			cout << "Customer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
            cout<<"Credit card number: "<<obj.ccn<<endl;
            cout<<"Debit card number: "<<obj.dcn<<endl;
		}
};
int main() {
    customer c("mayank",20,'M',"ABC123","Decf3456");
    c.print();
	return 0;
}