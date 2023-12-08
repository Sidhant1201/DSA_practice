class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int s =0;
       int e = matrix.size() * matrix[0].size() -1;
       int col = matrix[0].size();

       while(s<= e){
           int ele = s+ (e -s)/2;
           if(matrix[ele/col][ele%col] == target){
               return true;
           }
           else if(matrix[ele/col][ele%col] < target){
               s = ele+1;
           }
           else{
               e = ele -1;
           }
       }
       return false;
    }
};