class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxm = nums[0];
        int curr = nums[0];
        for (int i =1;i<n ;i++){
            curr = std::max(nums[i], curr+nums[i]);
            maxm = std::max(maxm,curr);
        }
        return maxm;

    }
};