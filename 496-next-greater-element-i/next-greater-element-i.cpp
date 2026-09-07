class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        int n = nums2.size();
        // for (int i = 0; i<n ;i++){
        //     map.insert({nums2[i],-1});
        // }

        stack<int> st;
        for (int i = 0;i<n ;i++){
            while(true){
                if (st.empty()){
                    st.push(i);
                    break;
                }
                if (nums2[i]>nums2[st.top()]){
                    int idx = st.top();
                    map.insert({nums2[idx],nums2[i]});
                    st.pop();
                } else {
                    st.push(i);
                    break;
                }
            }
        }

        int m = nums1.size();
        for (int i =0 ;i<m ;i++){
            if(map.contains(nums1[i])){
                nums1[i] = map.find(nums1[i])-> second;
            } else {
                nums1[i] = -1;
            }
        }

        return nums1;
    }
};