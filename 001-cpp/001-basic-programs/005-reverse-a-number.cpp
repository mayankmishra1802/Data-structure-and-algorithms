#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int reverse=0;
    while(n>0){
        int x=n%10;
        reverse=reverse*10+x;
        n=n/10;
    }
    cout<<"the reverse of the given number is:"<<reverse;
    return 0;
}