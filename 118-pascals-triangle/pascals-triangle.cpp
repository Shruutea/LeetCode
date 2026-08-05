class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pasc(numRows) ;
        for (int i =0;i<numRows; i++){
            pasc[i].resize(i+1);
            for(int j = 0 ;j< i+1; j++){
                if(j==0 or j==i){
                    pasc[i][j] = 1;
                }else {
                    pasc[i][j] = pasc[i-1][j-1]+pasc[i-1][j];
                }
            }
        }

        return pasc;
    }
};