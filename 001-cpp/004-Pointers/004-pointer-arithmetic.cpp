#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* p=&x;
    cout<<p<<endl;
    p++; //p=p+1*(size of data type)
    cout<<p<<endl;
    return 0;
}