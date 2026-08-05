//Hash Map - one pass (passing all values in a single loop) - unnecessary values skipped 
// two pass would've been passing the values first then fiding the solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        std::unordered_map<int,int> map;

        for (int i =0; i<n ;i++){
            int k = target-nums[i];
            if (map.find(k) != map.end()){
                return {map[k],i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};