class Solution {
public:
unordered_map<int,int> cache;
    int robb(vector<int>nums , int start , int stop){
        int k = stop-start+1;
        if(k == 1) return nums[start];
        if(k == 2) return max(nums[start],nums[stop]);

        vector<int> dp(k,0);
        dp[0] = nums[start];
        dp[1] = max(dp[0],nums[start+1]);

        for(int i = 2; i<k; i++){
            dp[i] = max(dp[i-1], dp[i-2]+nums[start+i]);
        }

        return dp[k-1];

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        return max(robb(nums,0,n-2), robb(nums,1,n-1));
    }
};