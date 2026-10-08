class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> numSet;
        sort(nums.begin(), nums.end());
        int len = nums.size()/3;
        for(int i=0; i<nums.size(); i++){
            if(i+len < nums.size() && nums[i] == nums[i+len]){
                numSet.insert(nums[i]);
            }
        }
        vector<int> ans(numSet.begin(), numSet.end());
        return ans;
    }
};