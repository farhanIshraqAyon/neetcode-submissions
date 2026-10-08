class Solution {
   public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> ss(nums.begin(), nums.end());
        int minVal = 1;
        int maxVal = *max_element(nums.begin(), nums.end());
        int length = 0;
        while (minVal + length <= maxVal) {
            if (ss.find(minVal + length) == ss.end()) {
                if (minVal + length > 0) {
                    return minVal + length;
                }
            }
            length++;
        }
        return minVal + length;
    }
};