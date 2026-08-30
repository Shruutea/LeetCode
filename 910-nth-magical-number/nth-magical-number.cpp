class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long modu = pow(10,9) + 7;
        long long l = min(a,b);
        long long r = 1LL*n * (min(a,b));
        long long ans = min(a,b);
        long long lcm = (1LL * a * b)/gcd(a,b);
        while (l <= r){
            long long mid = (l+r)/2;
            long long curr = (mid/a)+(mid/b)-(mid/lcm);

            if (curr>=n){
                ans = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        return int(ans % modu);
    }
};