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
void print_primes(int n){
    int j=1,i=2;
    while(j<=n){
        check_prime(i);
        if(check_prime(i)==1){
            cout<<i<<" ";
            j++;
        }
        i++;
    }
}
int main(){
    print_primes(10);
    return 0;
}