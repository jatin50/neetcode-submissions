class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low = 0;
         int high = heights.size() - 1;
         int area = 0;
         int currentmax;
         while(low < high){
            int h = min(heights[low], heights[high]);
            currentmax = (high - low) * h;
            if(currentmax > area){
                area = currentmax;
            }
            if(heights[low] < heights[high]) {
                low++;
            } else {
                high--;
            }
         }
         return area;
    }
};