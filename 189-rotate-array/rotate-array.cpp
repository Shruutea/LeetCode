class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<int> nums2(n);

        for (int i = 0; i<n ;i++){
            nums2[(i+k)%n] = nums[i];
        }

        for (int i =0 ;i<n ;i++){
            nums[i] = nums2[i];
        }
    }
};