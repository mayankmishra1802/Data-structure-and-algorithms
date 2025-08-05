#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the principal:";
    cin>>p;
    cout<<"Enter the rate:";
    cin>>r;
    cout<<"Enter the time:";
    cin>>t;
    float s=(p*r*t)/100;
    cout<<"The simpe interest is:"<<s;
    return 0;
}