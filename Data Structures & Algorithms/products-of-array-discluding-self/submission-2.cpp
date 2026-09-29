class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zprod = 1;
        int zero = 0;
        for (auto it : nums) {
            prod *= it;
            if (it == 0) {
                zero++;
            }
            if (it != 0) zprod *= it;
        }
        vector<int> ans;
        for (auto it : nums) {
            if (it != 0)
                ans.push_back(prod / it);
            else {
                if (zero > 1)
                    ans.push_back(0);
                else
                    ans.push_back(zprod);
            }
        }
        if (nums.size() == zero) {
            return vector<int>(zero, 0);
        }
        return ans;
    }
};
