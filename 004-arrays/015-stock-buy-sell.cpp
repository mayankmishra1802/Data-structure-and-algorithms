#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int minprice=INT_MAX;
    int profit=0;
    for(int i=0;i<prices.size();i++){
        minprice=min(prices[i],minprice);
        profit=max(profit,prices[i]-minprice);
    }
    return profit;
}
int main()
{
    vector<int>prices={7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}