#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>val={60,100};
    vector<long long>wt={10,20};
    long long capacity=50;
    long long n=val.size();

    vector<pair<double,long long>>fraction;

    for(long long i=0;i<n;i++){
        long long profit=(double)val[i]/wt[i];
        fraction.push_back({profit,i});
    }

    sort(fraction.begin(), fraction.end(), greater<>());
    
    double total_profit=0;
    for(int i=0;i<fraction.size();i++){
        int idx=fraction[i].second;
        if(capacity>=wt[idx]){
            capacity-=wt[idx];
            total_profit+=val[idx];
        }
        else{
            total_profit+=fraction[i].first*capacity;
            break;
        }
    }
    cout<<total_profit;
    return 0;
}