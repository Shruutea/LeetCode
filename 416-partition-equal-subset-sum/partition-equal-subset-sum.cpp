
class Solution {
public:
    bool tar(vector<int>& nums, int target) {
        int n = nums.size();

        vector<vector<int>> dp(n+1, vector<int>(target+1, 0));

        // Base case: sum 0 is always possible
        for(int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= target; j++) {

                // Don't include nums[i-1]
                dp[i][j] = dp[i-1][j];

                // Include nums[i-1], if possible
                if(nums[i-1] <= j) {
                    dp[i][j] = dp[i][j] ||
                                dp[i-1][j-nums[i-1]];
                }
            }
        }

        return dp[n][target];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;

        for(int x : nums) sum += x;

        if(sum % 2 != 0) return false;

        return tar(nums, sum/2);
    }
};
