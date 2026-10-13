class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ss;
        for(auto it : nums){
            ss.insert(it);
        }
        vector<int> ans(ss.begin(), ss.end());
        nums = ans;
        return (int)ss.size();
    }
};