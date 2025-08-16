#include<iostream>
using namespace std;
int main(){
    int*p=new int;
    *p=1000;  
    delete p; //memory deallocation //avoids memory leak
    p=new int;
    *p=500;
    cout<<*p;
    return 0;
}