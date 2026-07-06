class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        int l = 0;
         int r= nums.size()-1;
         while(l<=r){
            int m = l +(r-l)/2;
            res = m;
                if(nums[m]==target){
                    return res;
                    break;
                }
            if(nums[m]>nums[l]){
                if(target>=nums[l]&&target<nums[m]){
                    r= m-1;
                }else{
                    l = m+1;
                }
            }else{
                if(target<nums[l]&&target<=nums[m]){
                    r = m-1;
                }else{
                    l = m+1;
                }
            }
         }
            if(nums[res]==target){
                return res;
            }else{
                return -1;
            }
    }
};