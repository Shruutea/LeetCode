class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> col;
        unordered_map<int,int> row;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0 ;i<n; i++){
          for (int j = 0; j<m ;j++){
            if (matrix[i][j]== 0){
                if (row.count(i)==0){
                    row.insert({i,1});
                }
                if (col.count(j)==0){
                    col.insert({j,1});
                }
            }
          }  
        }
    
        for (auto i: row ){
        for (int k = 0; k<m ;k++){
               matrix[i.first][k] = 0;
            }
        } 

        for (auto j: col ){
            for (int k = 0; k<n ;k++){
               matrix[k][j.first] = 0;
            }
        }
    }
};