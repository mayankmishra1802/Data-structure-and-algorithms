#include<bits/stdc++.h>
using namespace std;
int findFirst(vector<int> &nums, int x) {
    int s = 0, e = nums.size() - 1, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] == x) {
            ans = mid;   
            e = mid - 1;  
        } 
        else if (nums[mid] > x) {
            e = mid - 1;
        } 
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int findLast(vector<int> &nums, int x) {
    int s = 0, e = nums.size() - 1, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] == x) {
            ans = mid;
            s = mid + 1;
        } 
        else if (nums[mid] > x) {
            e = mid - 1;
        } 
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={0,0,1,1,1,2,3};
    int x=1;
    cout<<findLast(nums,x)-findFirst(nums,x)+1;
    return 0;
}