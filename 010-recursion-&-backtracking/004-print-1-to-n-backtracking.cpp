#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1){
        return;
    }
    print(--n);
    cout<<n<<endl;
}
int main()
{
    int n=10;
    print(n+1);
    return 0;
}