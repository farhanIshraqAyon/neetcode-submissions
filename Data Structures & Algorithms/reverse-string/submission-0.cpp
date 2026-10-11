class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid = s.size() / 2;
        int left = 0;
        int right = s.size() - 1;
        for(int i=0; i<mid; i++){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return;
    }
};