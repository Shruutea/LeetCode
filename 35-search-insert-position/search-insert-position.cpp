class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res = -1;
        int n = nums.size();
        int start = 0, end = n-1;
        int mid = -1;

        while (start<=end){
            mid = (start + (end))/2;
            if (nums[mid] == target){
                res = mid;
                break;
            } else if (nums[mid] < target){
                start = mid+1;
            } else {
                end = mid-1;
            }
        }

        if (res == -1 ){
            if (target < nums[mid]){
                return mid;
            } else {
                return mid+1;
            }
        } else {
            return res;
        }
    }
};