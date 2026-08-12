class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxm = -1;
        for (int i = n-1; i>=0; i--){
            swap (arr[i],maxm);
            maxm = max(maxm,arr[i]);
        }

        return arr;
    }
};