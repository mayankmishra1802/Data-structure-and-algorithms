#include <bits/stdc++.h>
using namespace std;
int peak(vector<int>& nums) {
    int n = nums.size();
    int s = 1, e = n - 2; 
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) {
            return mid;
        }
        if (nums[mid] < nums[mid + 1]) {
            s = mid + 1; 
        } else {
            e = mid - 1; 
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {0,10,5,2};
    cout << peak(nums);
    return 0;
}
