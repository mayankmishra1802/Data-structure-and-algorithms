#include <bits/stdc++.h>
using namespace std;
int singleElement(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (mid > 0 && mid < n - 1) { //to prevent out of bounds
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) { //single element found
                return nums[mid];
            }
            if (nums[mid] == nums[mid + 1]) {  
                if ((mid % 2) == 0) s = mid + 2; //find in left part
                else e = mid - 1; //find in right part
            }
            else { 
                if ((mid % 2) == 0) e = mid - 2; //find in right part
                else s = mid + 1; //find in left part
            }
        }
    }
    return -1; //not found
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << singleElement(nums);
    return 0;
}
