class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1,end = -1;
        int n = nums.size();
        int l = 0, r= n-1;
        int k = 0;
        //lower bound : x>=target
        while (l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                end = mid;
                l = mid+1;
            } else if (nums[mid]<target){
                l = mid+1;
            } else{
                r = mid-1;
            }
        }
        //upper bound : x<= target
        l = 0, r = n-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (nums[mid] == target){
                start = mid;
                r = mid-1;
            } else if (nums[mid]>target){
                r = mid-1;
            } else{
                l = mid+1;
            }
        }

        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);

        return ans;
    }
};