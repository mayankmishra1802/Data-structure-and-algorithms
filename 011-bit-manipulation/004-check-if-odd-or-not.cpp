#include<bits/stdc++.h>
using namespace std;
bool isOdd(int n) {
    if(n&1==1){
       return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<isOdd(n);
    return 0;
}