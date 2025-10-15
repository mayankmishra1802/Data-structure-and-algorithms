#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>coins={1,2,5};
    int amount=11;
    sort(coins.begin(),coins.end(),greater<int>());
    int noOfCoins=0;
    int total_amount=0;
    int i=0;
    while(i<coins.size()){
        if(total_amount==amount){
            break;
        }
        else if(total_amount>amount){
            noOfCoins--;
            total_amount-=coins[i];
            i++;
        }
        else{
            total_amount+=coins[i];
            noOfCoins++;    
        }
    }
    if(i==coins.size()){
        cout<<"-1";
    }
    else{
        cout<<noOfCoins;
    }
    return 0;
}