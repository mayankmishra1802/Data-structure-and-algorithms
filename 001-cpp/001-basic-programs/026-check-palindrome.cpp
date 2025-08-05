#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        int n=abs(x);long rev_n=0;
        if(x<0){
            return false;
        }
        else{
            while(n!=0){
                rev_n=rev_n*10+n%10;
                n=n/10;
            }
            if(x==rev_n){
                return true;
            }
            else{
                return false;
            }
        }
    }
int main()
{
    int x=456;
    int y=222;
    cout<<isPalindrome(x)<<endl;
    cout<<isPalindrome(y)<<endl;
    return 0;
}