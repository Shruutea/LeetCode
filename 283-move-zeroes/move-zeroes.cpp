class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int z = 0;
        int i = 1;

        while (i<n && z<n){
            if (nums[z]==0 && nums[i]==0){
                i++;
            } else if (nums[z]==0 && nums[i] != 0){
                swap(nums[z],nums[i]);
                z++;
                i++;
            } else {
                z++;
                i++;
            }
        }
    }
};