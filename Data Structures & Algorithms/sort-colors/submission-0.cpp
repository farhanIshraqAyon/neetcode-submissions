class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3, 0);
        for(auto it : nums)
        {
            if(it == 0) count[0]++;
            if(it == 1) count[1]++;
            if(it == 2) count[2]++;
        }

        int itr = 0;
        while(count[0] != 0)
        {
            nums[itr] = 0;
            itr++;
            count[0]--;
        }
        while(count[1] != 0)
        {
            nums[itr] = 1;
            itr++;
            count[1]--;
        }
        while(count[2] != 0)
        {
            nums[itr] = 2;
            itr++;
            count[2]--;
        }
        return;
    }
};