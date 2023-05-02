class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int indexrow = 0;
        int indexcol = col -1;
        while(indexrow< row && indexcol>=0){
            int element = matrix[indexrow][indexcol];
            if(element== target){
                return true;
            }
            else if(element < target){
                indexrow++;
            }
            else if(element > target){
                indexcol--;
            }
        }
        return false;
    }
};