class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>count;
        int res=0;
        int l=0;
        int maxc=0;
        for(int r=0;r<s.length();r++){
            count[s[r]]++;
            maxc = max(maxc,count[s[r]]);
            while((r-l+1)-maxc>k){
                count[s[l]]--;
                l++;
            }
        res= max(res,r-l+1);
        }
    return res;
    };
};
