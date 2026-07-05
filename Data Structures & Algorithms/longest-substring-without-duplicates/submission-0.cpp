class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_set<char> charset;
     int l=0;
     int count =0;
     for( int r=0;r<s.size();r++){
        while(charset.find(s[r])!=charset.end()){
        charset.erase(s[l]);
        l++;
        }
        charset.insert(s[r]);
       count = max(count,r-l+1);
     }   
     return count;
    }
};
