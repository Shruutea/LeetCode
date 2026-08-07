class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        for (int i=1;i<nums.size(); i++){
            if (i==nums.size()-1){
                if (nums[i] != nums[i-1]){
                    return nums[i];
                }
            }
            if (nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                return nums[i];
            }
        }

        return nums[0];
    }
};