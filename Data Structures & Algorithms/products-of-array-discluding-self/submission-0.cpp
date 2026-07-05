class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output(nums.size(),1);
        // output.length()=nums.length();
         int prefix = 1;
        for(int i =0;i<nums.size();i++){
            output[i] = prefix;
            prefix*=nums[i];
        }
         int postfix = 1;
         for(int i= nums.size()-1;i>=0;i--){
            output[i]*=postfix;
            postfix*=nums[i];
         };
         return output;
    }
};
