class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count =1;
        int maxCount=0;
        sort(nums.begin(),nums.end());
        int CurrentNumber = nums[0];
        if(nums.empty()){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==CurrentNumber+1){
                count++;
                CurrentNumber = nums[i];
            }else if(nums[i]==CurrentNumber){
                CurrentNumber = nums[i];
            }else{
                count=1;
                CurrentNumber=nums[i];
            }
            if(count>maxCount){
                maxCount=count;
            }
        }
        return {maxCount};
    }
};
