class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int high=prices[0];
         int low=prices[0];
        int maxp= 0;
         int currentmax;
        for( int i=1;i<prices.size();i++){
            if(prices[i]<low){
                low= prices[i];
                high = prices[i];
                currentmax=high-low;
            }else if(prices[i]>low){
                high = prices[i];
                currentmax= high-low;
            }
            if(currentmax>maxp){
                maxp=currentmax;
            };
        }
        return maxp;
    }
};
