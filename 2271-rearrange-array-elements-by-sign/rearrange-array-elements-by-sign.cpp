class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();std::vector<int> sol(n,0);
        int pos = 0;
        int neg = 1;

        for (int i = 0; i<n ;i++){
            if (nums[i]>=0){
                sol[pos] = nums[i];
                pos = pos+2;
            } else {
                sol[neg] = nums[i];
                neg = neg+2 ;
            }
        }

    return sol;
    }
};