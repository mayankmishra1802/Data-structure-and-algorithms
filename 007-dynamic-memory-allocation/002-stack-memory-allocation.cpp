#include<iostream>
using namespace std;
int *f(){   //function pushed on function call stack
    int x=10;  //memory allocated 
    return &x;   //function removed from function call stack //memory deallocated
}
int main(){   
    int *ptr=f();
    cout<<*ptr;   //undefined behaviour
    return 0;
}