#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p=&x;
    cout<<"address: "<<p<<endl;
    cout<<"value: "<<*p<<endl;  //derefencing operator is '*'


    char* ptr = (char*)&x; 
    //type casting value of pointer ptr because value of variable is integer
	cout<<"value:"<<(int)*ptr<<endl;
    //type casting pointer ptr into interger because address is integer value
    cout<<"address:"<<(int *)ptr<<endl; 
    //cout<<ptr; //it is wrong as pointer ptr is character type value

    return 0;
}