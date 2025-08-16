#include<iostream>
using namespace std;
int main(){
    int *p=new int;  //dynamic memory allocation 
    *p=1000;
    cout<<*p;
    delete p;  //dynamic memory deallocation 
    return 0;
}