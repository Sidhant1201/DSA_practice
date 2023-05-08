int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0; 
        int nrow = mat.size();
        int ncol = mat[0].size();
        for(int row = 0; row< nrow; row++){
            for(int col = 0; col<ncol; col++){
                if(row == col){
                    cout<<"prim "<< mat[row][col];
                    sum+= mat[row][col];
                }
                if(row!= col && (ncol-1 == col+ row)){
                    cout<<" sec "<<mat[row][col];
                    sum+=mat[row][col];
                }
            }
            cout<<endl;
        }
        return sum;
    }