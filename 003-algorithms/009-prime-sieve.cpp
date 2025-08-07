#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    if(n<=2){
        cout<<0;
    }
    else{
        vector<bool>primes(n,true);
        primes[0]=primes[1]=false;
        for(int i=2;i*i<=n;i++){
            if(primes[i]==true){
                for(int j=i*i;j<n;j+=i){
                    primes[j]=false; 
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(primes[i]==true){
                cnt++;
            }
        }
        cout<<cnt;
    }
    return 0;
}