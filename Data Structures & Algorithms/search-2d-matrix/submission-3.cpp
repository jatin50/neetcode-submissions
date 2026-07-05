class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
     int top = 0;
     int bot = row-1;
     while(top<=bot){
        int midrow = (top+bot)/2;
        if(target>matrix[midrow][col-1]){
            top = midrow+1;
        }else if(target<matrix[midrow][0]){
            bot = midrow-1;
        }else{
            break;
        }
     }   
     if(!(top<=bot)){
        return false;

     }
     int midrow = (top+bot)/2;
     int l =0,r= col-1;
     while(l<=r){
        int m = (l+r)/2;
        if(target > matrix[midrow][m]){
            l = m+1;
        }else if(target<matrix[midrow][m]){
            r = m-1;
        }else{
            return true;
        }
     }
     return false;
    }
};
