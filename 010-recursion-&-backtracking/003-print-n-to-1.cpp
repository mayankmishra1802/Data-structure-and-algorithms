#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(--n);
}
int main()
{
    print(10);
    return 0;
}