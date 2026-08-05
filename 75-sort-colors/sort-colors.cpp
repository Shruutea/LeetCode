class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        std::unordered_map<int,int> map;
        for (int i=0; i<n ;i++){
            if(map.find(nums[i]) != map.end()){
                map[nums[i]]++;
            }else {
                map[nums[i]] = 1;
            }
            
        }

        for (int i =0 ;i<n ;i++){
            if (map[0] != 0){
                if (nums[i] != 0){
                    nums[i] = 0 ;
                    map[0]--;
                }else {
                    map[0]--;
                }
            } else if (map[1] != 0){
                if (nums[i] != 1){
                    nums[i] = 1;
                    map[1]--;
                } else {
                    map[1]--;
                }
            } else{
                if (map[2] != 0){
                    if (nums[i] != 2){
                        nums[i] = 2;
                        map[2]--;
                    } else {
                        map[2]--;
                    }
                }
            }
        }
    }
};