class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int count = n/4;
        int ans = 0;
        if(n<4){
            return arr[0];
        }
        for (int i=1; i<n; i++){
            if (arr[i]==arr[i-1]){
                count--;
            } else{
                count = n/4;
            }
            if (count==0){
                ans = arr[i];
                break;
            }
        }
        return ans;
        
    }
};