class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>max;
        int res;
        for(int n :nums){
            max.push(n);
        }
        while(k!=1){
            max.pop();
            k--;
        }
        return max.top();
    }
};
