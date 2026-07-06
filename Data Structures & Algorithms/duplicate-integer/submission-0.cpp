class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i=0;i<(sizeof(nums)/sizeof(nums[0]));i++){
            for(int j =0;j<(sizeof(nums)/sizeof(nums[0]));j++){
                if(a[i]==a[j]){
                    return true
                }
                else{
                    return false
                }
            }
        }
    }
};