#include<bits/stdc++.h>
using namespace std;
void print(int n,int i=1){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    print(n,i+1);
}
int main()
{
    print(10);
    return 0;
}