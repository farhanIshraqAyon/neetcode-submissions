class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r = n - (k % n);
        vector<int> ans(n);
        int itr = 0;
        for(int i = r; i<n; i++){
            ans[itr++] = nums[i];
        }
        for(int i = 0; i<r; i++){
            ans[itr++] = nums[i];
        }
        nums = ans;
        return;
    }
};