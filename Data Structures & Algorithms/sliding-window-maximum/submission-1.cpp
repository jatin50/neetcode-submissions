class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0;
        int r=0;
        vector<int>res;
        if(nums.size()==0){
            return {};
        }
        if(nums.size()==1){
            return {nums[0]};
        }
        while(r<=nums.size()-k+1){
         r = l + k-1;
        int max = nums[l];
        for(int i =l+1;i<=r;i++){
            if(nums[i]>max){
                max = nums[i];
            }
        }
        res.push_back(max);
        l++;
        }
        return res;
    }
};
