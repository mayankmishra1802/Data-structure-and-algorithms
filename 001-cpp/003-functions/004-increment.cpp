#include<iostream>
using namespace std;
int increment(int x){
    ++x;
    return x;
}
int main(){
    int x=10;
    cout<<x<<endl;
    cout<<increment(x)<<endl;
    return 0;
}