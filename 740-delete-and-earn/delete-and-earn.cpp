class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        unordered_map<int,int> freq;
        int maxim = 0;
        for (int i:nums){
            maxim = max(maxim,i);
            if(freq.contains(i)){
                freq[i]++;
            }else{
                freq.insert({i,1});
            }
        }

        if(maxim == 0) return 0;
        for(int i = 0 ;i<=maxim;i++){
            if(!freq.contains(i)){
                freq.insert({i,0});
            }
        }

        vector<int> dp(maxim+1);
        dp[0] = 0;
        dp[1] = freq[1];
        for(int i=2 ;i<maxim+1;i++){
            dp[i] = max((freq[i]*i + dp[i-2]), dp[i-1]);
        }

        return dp[maxim];
    }
};