class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nc(n,-1);
        // for (int i = 0 ;i<2n i++){
        //     nc[i] = nums[i%n];
        // }
        stack<int> st;

        for (int i = 0; i<(2*n); i++){
            int k = i%n;
            while (true){
                if (st.empty()){
                    st.push(k);
                    break;
                }

                if (nums[st.top()] < nums[k]){
                    int idx = st.top();
                    nc[idx] = nums[k];
                    st.pop();
                } else {
                    st.push(k);
                    break;
                }
            }
        }
        return nc;

    }
};