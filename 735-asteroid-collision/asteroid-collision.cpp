class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        for (int i = 0; i<n ;i++){
            while (true){
                if (st.empty()) {
                    st.push(i); break;
                }

                int last = asteroids[st.top()];
                int inc = asteroids[i];

                if ((last<0 and inc<0) or (last>0 and inc>0) or (last<0 and inc>0)){
                    st.push(i);
                    break;
                } else if (abs(last)> abs(inc)){
                    break;
                } else if (abs(last) < abs(inc)){
                    st.pop(); 
                } else {
                    st.pop();
                    break; // equal
                }
            }
        }

        vector <int> ans;
        while (!st.empty()){
            ans.push_back (asteroids[st.top()]);
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};