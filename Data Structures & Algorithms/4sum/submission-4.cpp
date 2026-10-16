class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int x=0; x<n; x++){
            if(x > 0 && nums[x] == nums[x - 1]) continue;
            for(int i = x + 1; i < n; i++){
                if(i > x+1 && nums[i] == nums[i - 1]) continue;
                int j = i+1;
                int k = n - 1;
                while(j < k){
                    long long sum = (long long)nums[x] + nums[i] + nums[j] + nums[k];
                    if(sum < target){
                        j++;
                    } else if(sum > target){
                        k--;
                    } else{
                        ans.push_back({nums[x], nums[i], nums[j], nums[k]});
                        j++;
                        k--;
                        while(j < k && nums[j] == nums[j-1]) j++;
                        while(j < k && nums[k] == nums[k+1]) k--;
                    }
                }
            }
        }
        return ans;
    }
};