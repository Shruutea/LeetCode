class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int n = nums.size();

        for (int i=1; i<n; i++){
            if(i == n-1){
                if(nums[i]!=nums[i-1]){
                    return nums[i];
                }
            }else if ((nums[i]!=nums[i-1])&&(nums[i]!= nums[i+1])){
                    return nums[i];
            }
        }

        return nums[0];
    }
};