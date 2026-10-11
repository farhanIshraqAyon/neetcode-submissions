class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid = s.size() / 2;
        int left = 0;
        int right = s.size() - 1;
        for(int i=0; i<mid; i++){
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return;
    }
};