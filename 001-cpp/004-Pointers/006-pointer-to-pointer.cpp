#include<iostream>
using namespace std;
int main(){
    int x=5;
    int*p=&x;  //pointing to x
    int**pt=&p;  //pointing to pointer p
    int***ptr=&pt;  //pointing to pointer pt
    cout<<"address of x:"<<p<<endl;
    cout<<"address of p:"<<pt<<endl;
    cout<<"address of pt:"<<ptr<<endl;
    return 0;
}