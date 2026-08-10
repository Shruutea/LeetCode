class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int n = prices.size();
        int left = 0, right = 1;

        while(right<n){
            int diff = prices[right] - prices[left];
            if (prices[right]>prices[left]){
                max = std::max(max,diff);
            } else {
                left = right;
            }
            right ++;
        }
        return max;
    }
};