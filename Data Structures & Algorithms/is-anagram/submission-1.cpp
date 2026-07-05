class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
       unordered_map<char,int>counts;
       unordered_map<char,int>countT;
        for(int i =0;i<s.length();i++){
            counts[s[i]]++;
            countT[t[i]]++;
        }
        return counts==countT;
    }
};
