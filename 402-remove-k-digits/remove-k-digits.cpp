class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack <char> st;

        for (int i =0 ;i<n ;i++){
            int curr = num.at(i);
            while (true){
                if (k==0){
                st.push(curr);break;
                }
                
                if (st.empty()){
                    st.push(curr); break;
                }

                if (st.top() > curr){
                    st.pop(); k--;
                }else{
                    st.push(curr); 
                    break;
                }
            }
        }

        while (k>0 and !st.empty()){
            st.pop();k--;
        }

        int m = st.size();
        string str;
        for (int i=0 ;i<m ;i++){
            str += st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());

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