class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int l = 0, h = (n*m)-1;

        while (l<=h){
            int mid = (l + h)/2;
            int row = mid/n;
            int col = mid%n;
            int k = matrix[row][col];
            if (k == target){
                return true;
            } else if (k>target){
                h = mid-1;
            } else{
                l = mid+1;
            }
        }

        return false;

        return false;
    }
};