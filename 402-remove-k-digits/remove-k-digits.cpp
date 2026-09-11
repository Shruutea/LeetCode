class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack <char> st;

        for (int i =0 ;i<n ;i++){
            int curr = num.at(i);
            while (k>0 and !st.empty() and st.top()>curr){
                st.pop();k--;
            }
            st.push(curr);
        }

        while (k>0 and !st.empty()){
            st.pop();k--;
        }

        int m = st.size();
        string str(m,' ');
        // str.reserve(m);
        for (int i=m-1 ;i>=0 ;i--){
            str.at(i) = st.top();
            st.pop();
        }

        // reverse(str.begin(),str.end());

        int j = 0;
        while (j<m and str.at(j)=='0'){
            j++;
        }

        string ans;
        while (j<m){
            ans += str.at(j);
            j++;
        }


        return ans.size() ? ans:"0";
    }
};