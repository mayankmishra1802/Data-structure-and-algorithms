#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"The sum of the digits are:"<<sum;
    return 0;
}