class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = nums[0];
        int count = 0;
        for (int i =0 ; i<n; i++){
            if (nums[i]==a){
                count ++;
            } else {
                count--;
            }
            if (count==0){
                a = nums[i];
                count = 1;
            }
        }

        return a ;
    }
};