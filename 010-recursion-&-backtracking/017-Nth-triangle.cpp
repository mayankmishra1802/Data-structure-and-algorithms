#include<bits/stdc++.h>
using namespace std;
int s=0;
int Nth_Triangle(int n){
    if(n==0){
        return s;
    }
    s+=n;
    Nth_Triangle(n-1);
}
int main()
{
    int n=3;
    cout<<Nth_Triangle(n);
    return 0;
}