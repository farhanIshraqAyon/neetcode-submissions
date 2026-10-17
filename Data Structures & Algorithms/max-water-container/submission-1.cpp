class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxi = min(heights[l], heights[r]) * (r - l);
        while(l < r){
            int vo = min(heights[l], heights[r]) * (r - l);
            maxi = max(vo, maxi);
            if(heights[l] < heights[r]){
                l++;
            } else{
                r--;
            }
        }
        return maxi;
    }
};
