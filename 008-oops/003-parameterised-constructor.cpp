#include<iostream>
#include<cstring>
using namespace std;
class customer {
	public :
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
		void printCustomerInfo() {
			cout << "Customer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
		}
};
int main() {
    customer c("mayank",20,'M');
    c.printCustomerInfo();
    customer c1;
	return 0;
}