//avoids the undefined behaivour on stack
#include<iostream>
using namespace std;
int *f(){  //function pushed on function call stack
    int*p=new int; //memory allocated on heap
    *p=100;
    return p;//function removed from function call stack //memory not deallocated
}
int main(){   
    int *ptr=f();  //point to the pointer on heap i.e. p
    cout<<*ptr;  
    return 0;
}