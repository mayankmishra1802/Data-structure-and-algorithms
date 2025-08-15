#include<bits/stdc++.h>
using namespace std;
int beautySum(string s) {
    int sum=0;
    for(int i=0;i<s.size();i++){
        vector<int>freq(26,0); 
        for(int j=i;j<s.size();j++){
            freq[s[j]-'a']++;
            int maxFreq = 0, minFreq = INT_MAX;
            for (int k=0;k<26;k++) {
                if (freq[k]> 0) {
                    maxFreq = max(maxFreq,freq[k]);
                    minFreq = min(minFreq, freq[k]);
                }
            }
            sum=sum+(maxFreq-minFreq);
        }
    }
    return sum;
}
int main()
{
    string s="aabcb";
    return 0;
}