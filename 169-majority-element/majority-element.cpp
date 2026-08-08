class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(),nums.end());
        int mid = (n-1)/2;

        return nums[mid];
    }
};