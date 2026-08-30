class Solution {
public:
    int possible(vector<int>& bloomDay, int k, int day){
        int n = bloomDay.size();
        int count = 0;
        int b =0 ;
        for (int d : bloomDay){
            if (d <= day){
                count ++;
                if (count == k) b++ , count = 0;
            } else {
                count = 0;
            }
            

        }

        return b;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (1LL*m*k > 1LL*n) return -1;

        int l = bloomDay[0], r = bloomDay[0];
        for (int day : bloomDay){
            l = min(day,l);
            r = max(day,r);
        }
        int ans = -1;

        while (l<=r){
            int mid = (l+r)/2;
            if (possible(bloomDay, k, mid) >= m){
                ans = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        return ans;

    }
};