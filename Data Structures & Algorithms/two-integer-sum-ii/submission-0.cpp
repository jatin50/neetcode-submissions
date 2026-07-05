class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int *p = &numbers[0];
        int *q = &numbers[numbers.size()-1];
        while(p < q){
            int sum = *p + *q;
            if(target < sum){
                q--;
            }else if(target > sum){
                p++;
            }else if(target == sum){
                return {(int)(p - &numbers[0] + 1), (int)(q - &numbers[0] + 1)};
            }
        }
        return {};
    }
};