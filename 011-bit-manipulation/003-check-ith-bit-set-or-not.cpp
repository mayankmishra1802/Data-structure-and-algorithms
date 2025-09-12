#include<iostream>
using namespace std;
bool checkIthBit(int n, int i) {
    if((n>>i)&1==1){ //ith is 1 or not
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n,i;
    cout<<"enter a number:";
    cin>>n;
    cout<<"enter the bit to check:"; 
    cin>>i;
    cout<<checkIthBit(n,i);
    return 0;
}