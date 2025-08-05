#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p;  //pointer declaration
    p=&x;    //pointer assignement
    cout<<p<<endl;   //address of x
    
    //storing address of one type of variable to another type of variable
    char ch='b';
    int *ptr=(int *)&ch;   //explicit type casting
    cout<<ptr;   
    return 0;
}