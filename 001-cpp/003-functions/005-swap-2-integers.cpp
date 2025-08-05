#include<iostream>
using namespace std;
void myswap(int a, int b){
    int c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
}
int main(){
    int a=10,b=5;
    myswap(a,b);
    return 0;
}