#include<iostream>
using namespace std;
bool iseven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<iseven(100)<<endl;
    cout<<iseven(37);
    return 0;
}