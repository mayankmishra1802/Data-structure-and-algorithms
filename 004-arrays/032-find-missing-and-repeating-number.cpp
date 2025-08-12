#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> nums)
{
    vector<int> ans(2, 0);
    vector<int> freq(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i] - 1]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq[i] > 1)
        {
            ans[0] = i + 1;
        }
        else if (freq[i] == 0)
        {
            ans[1] = i + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={3,4,5,1,1};
    vector<int>v=findMissingRepeatingNumbers(nums);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}