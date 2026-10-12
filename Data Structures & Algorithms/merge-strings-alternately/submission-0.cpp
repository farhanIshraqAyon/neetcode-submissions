class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int sz = min((int)word1.size(), (int)word2.size());
        string ans="";
        for(int i=0; i<sz; i++){
            ans += word1[i]; 
            ans += word2[i];
        }
        for(int i=sz; i<word1.size(); i++){
            ans += word1[i];
        }
        for(int i=sz; i<word2.size(); i++){
            ans += word2[i];
        }
        return ans;
    }
};