//pref and suff max approach
class Solution {
public:
    int trap(vector<int>& height) {
        int total = 0 ;
        int n = height.size();
        vector<int> suf_max(n);

        suf_max[n-1] = height[n-1];
        for (int i = n-2 ; i>=0 ;i--){
            suf_max[i] = max(suf_max[i+1] , height[i]); 
        }

        int pref_max = 0;
        for (int i = 0; i<n ; i++){
            pref_max = max (pref_max, height[i]);
            if (height[i] < pref_max and height[i] < suf_max[i]){
                total += min(pref_max, suf_max[i]) - height[i];
            }
        }

        return total;
    }
};