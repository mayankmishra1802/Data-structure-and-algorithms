#include<iostream>
using namespace std;
bool check_prime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    cout<<check_prime(10)<<endl;
    cout<<check_prime(23)<<endl;
    return 0;
}