class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> next(n,n);
        vector<int> prev(n,-1);

        for (int i =0 ;i<n;i++){
            while (true){
                if (st.empty()){
                    st.push(i);
                    break;
                }

                if (arr[st.top()]>=arr[i]){
                    next[st.top()] = i;
                    st.pop();
                }else{
                    st.push(i);
                    break;
                }
            }
        }
        while (st.size())st.pop();

        for (int i = n-1 ;i >=0 ; i--){
            while (true){
                if (st.empty()){
                    st.push(i); break;
                }

                if(arr[st.top()] > arr[i]){
                    prev[st.top()] = i;
                    st.pop();
                } else {
                    st.push(i); break;
                }
            }
        }

        long long sum = 0;
        for (int i =0 ;i<n ;i++){
            long long peeche = i - prev[i];
            long long aage = next[i] -i ;

            long long total = aage*peeche;
            sum += ((long long)arr[i]*total);
        }

        long long mod = 1e9+7;
        return sum % mod;
    }
};