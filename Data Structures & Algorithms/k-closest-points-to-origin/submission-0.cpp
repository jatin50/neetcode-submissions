class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       vector<vector<int>>res;
        priority_queue<pair<int,vector<int>>>maxHeap;
        for( auto &p : points){
        int dist = p[0]*p[0]+p[1]*p[1];
        maxHeap.push({dist,p});
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
        }
        while(!maxHeap.empty()){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};
