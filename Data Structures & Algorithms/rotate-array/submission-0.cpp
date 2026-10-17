class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r = n - (k % n);
        vector<int> ans;
        for(int i = r; i<n; i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0; i<r; i++){
            ans.push_back(nums[i]);
        }
        nums = ans;
        return;
    }
};