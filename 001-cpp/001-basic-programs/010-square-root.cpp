#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter a positive number:";
    cin>>n;
    cout<<"enter decimal places:";
    cin>>p;
    int j=0; float d=1.0;
    while(j<p){
        d=d/10;
        j++;
    }
    float i=0,s;
    while(true){
        if(i*i<=n){
            s=i;
        }
        else{
            break;
        }
        i=i+d;
    }
    cout<<"The square root is:"<<s;
    return 0;
}