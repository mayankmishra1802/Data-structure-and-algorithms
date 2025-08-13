#include <bits/stdc++.h>
using namespace std;
int findRotationCount(vector<int>& nums) {
    int s = 0, e = nums.size() - 1;
    int ans= INT_MAX;
    int idx= -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[s] <= nums[e]) {
            if (nums[s] < ans) {
                ans = nums[s];
                idx= s;
            }
            break;
        }
        else if (nums[mid] >= nums[s]) {
            if (nums[s] < ans) {
                ans= nums[s];
                idx= s;
            }
            s = mid + 1;
        }
        else {
            if (nums[mid] < ans) {
                ans= nums[mid];
                idx = mid;
            }
            e = mid - 1;
        }
    }  
    return idx; //index of minimum element
}

int main() {
    vector<int> nums = {1,2,4,5,6,7,0};
    cout<<findRotationCount(nums);
    return 0;
}
