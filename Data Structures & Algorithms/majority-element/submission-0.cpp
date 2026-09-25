class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = INT_MIN;
        int cnt = 0;
        int val = nums[0];
        int mid = nums.size() / 2;
        if(nums[mid] == nums[0] || nums[mid] == nums[nums.size() - 1]){
            return nums[mid];
        }
    }
};