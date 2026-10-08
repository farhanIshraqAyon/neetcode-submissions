class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int sz = nums.size();
        if(sz == 0) return 0;
        sort(nums.begin(), nums.end());
        int cnt = 1;
        int maxi = 1;
        for(int i=0; i<sz-1; i++){
            if(nums[i] == nums[i+1]) continue;
            if(nums[i] + 1 == nums[i+1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};
