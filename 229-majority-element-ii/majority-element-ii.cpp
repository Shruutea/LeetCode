class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int a1 = 0, a2 = 0;
        int c1 = 0, c2 = 0;

        for (int i=0; i<n ;i++){
            if (c1 == 0 and nums[i] != a2){
                a1 = nums[i];
                c1++;
            } else if (c2 == 0 and nums[i] != a1){
                a2 = nums[i];
                c2++;
            } else if (nums[i] == a1){
                c1++;
            } else if (nums[i]==a2){
                c2++;
            } else {
                c1--;
                c2--;
            }
   
        }

        c1=0,c2=0;
        for (int i =0; i<n ;i++){
            if(nums[i] == a1){
                c1++;
            }else if (nums[i] == a2){
                c2++;
            }
        }
        int count = n/3;
        if (c1>count){
            ans.push_back(a1);
            }
        if (c2>count){
            ans.push_back(a2);
        }
        
        return ans;
    }
};