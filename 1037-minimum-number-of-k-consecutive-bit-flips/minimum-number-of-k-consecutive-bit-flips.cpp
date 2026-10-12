class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int flips =0 , ans =0;
        int n = nums.size();

        for (int i =0 ;i<n ;i++){
            if (i-k >=0 and nums[i-k] == 2)flips --;
            
            if((nums[i]+flips)%2 == 0){
                if(i+k>n) return -1;
                nums[i] = 2;
                flips++;
                ans++;
            }
        }

        return ans;
    }
};