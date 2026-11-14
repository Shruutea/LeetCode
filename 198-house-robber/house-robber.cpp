class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        vector<int> chori(n,0);
        chori[0] = nums[0];
        if(nums[1]>nums[0]){
            chori[1] = nums[1];
        }else{
            chori[1] = nums[0];
        }
        int i=2;
        while(i<n){
            if(chori[i-2] + nums[i] > chori[i-1]){
                chori[i] = chori[i-2] + nums[i];
            }else{
                chori[i] = chori[i-1];
            }
            i++;
        }

        return chori[n-1];
    }
};