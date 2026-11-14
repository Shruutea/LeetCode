class Solution {
public:
unordered_map<int,int> cache;
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 or n==2) return 1;

        if(cache.contains(n)){
            return cache[n];
        }

        cache.insert({n, tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3)});

        return cache[n];
    }
};