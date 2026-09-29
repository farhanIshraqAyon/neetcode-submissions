class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zero = 0;
        for (auto it : nums) {
            if (it != 0)
                prod *= it;
            else
                zero++;
        }
        if (zero > 1) return vector<int>(nums.size(), 0);
        vector<int> ans;
        for (auto it : nums) {
            int val;
            if(zero > 0) val = (it == 0) ? prod : 0;
            else val = prod / it;
            ans.push_back(val);
        }
        return ans;
    }
};
