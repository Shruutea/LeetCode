class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i =0;i<n-2;i++){
            if (i > 0 && nums[i] == nums[i - 1])continue;
            int left_sum = 0-nums[i];
            int left = i+1;
            int right = n-1;
            while(left<right){
                int curr_sum = nums[i]+nums[left]+nums[right];
                if (curr_sum == 0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right and nums[left]==nums[left-1]) left++;
                    while(left<right and nums[right] == nums[right+1]) right--;
                } else if (curr_sum > 0){
                    right--;
                } else {
                    left ++;
                }
            }
        }

        return ans;
    }
};