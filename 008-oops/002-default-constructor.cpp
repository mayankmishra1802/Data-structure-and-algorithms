#include<iostream>
using namespace std;
class customer {
	public :
		char name[100];
		int age;
		char gender;
		
		customer(){  //default constructor
            cout<<"i am a default constructor"<<endl;
        }
		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
		}
};
int main() {
    customer c;
    //default constructor is called whenever an object is created
	return 0;
}