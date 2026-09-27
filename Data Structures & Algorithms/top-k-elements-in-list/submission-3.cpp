class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> freq;
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i=0; i < nums.size(); i++)
        {
            if(i + 1 < nums.size() && nums[i] == nums[i+1])
            {
                count++;
            }
            else
            {
                freq.push_back({count+1, nums[i]});
                count = 0;
            }
        }
        sort(freq.begin(), freq.end(), greater<pair<int, int>>());

        vector<int> ans;
        for(int i = 0; i < k; i++)
        {
            ans.push_back(freq[i].second);
        } 
        return ans;
    }
};
