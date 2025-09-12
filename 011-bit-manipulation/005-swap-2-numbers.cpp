#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=7;
    int m=5;
    cout<<"before swapping:"<<n<<" "<<m<<endl;
    n=n^m;  //n=7^5
    m=n^m;  //m=(7^5)^5=7
    n=n^m;  //n=(7^5)^7=5
    cout<<"after swapping:"<<n<<" "<<m;
    return 0;
}