class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = s.size();
        int m = g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int child = 0, cookie =0, count = 0;

        while(cookie<n and child<m){
            if(g[child] <= s[cookie] ){
                child++;
                count++;
            }
            cookie ++;
        }

        return count;
    }
};