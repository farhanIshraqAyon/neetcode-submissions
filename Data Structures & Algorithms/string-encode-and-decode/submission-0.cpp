class Solution {
   public:
    string encode(vector<string>& strs) {
        string en = "";
        for(const string& s : strs){
            en += to_string(s.size()) + "#" +s;
        }
        return en;
    }

    vector<string> decode(string en) {
        vector<string> de;
        int i = 0;
        while(i < en.size()){
            int delim = en.find('#', i);
            int len = stoi(en.substr(i, delim - i));
            string str = en.substr(delim + 1, len);
            de.push_back(str);
            i = delim + 1 + len;
        }
        return de;
    }
};
