#include<iostream>
using namespace std;
int main(){
    int x=5;
    void*ptr=&x;  //void pointer

    int*p=NULL;  //null pointer
    cout<<ptr<<endl;
    cout<<p;
    return 0;
}