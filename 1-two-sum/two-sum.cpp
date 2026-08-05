class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> sol;
        int n = nums.size();

        for (int i =0; i<n-1; i++){
            int k = target - nums[i];
            for (int j=i+1; j<n;j++){
                if (nums[j] == k){
                    sol.push_back(i);
                    sol.push_back(j);
                }
            }
        }

        return sol;
    }
};