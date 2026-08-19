class Solution {
public:
    typedef pair<int,pair<int,int>> P;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        int n = nums1.size();
        int m = nums2.size();

        priority_queue<P,vector<P>, greater<P>> pq;//min-heap storing {sum,{i,j}} in ascending order of sum
        set<pair<int,int>> visited;//hash set for visited pairs 

        pq.push({nums1[0]+nums2[0],{0,0}});
        visited.insert ({0,0});

        while (k-- and !pq.empty()){
            auto temp = pq.top();
            pq.pop();

            int i = temp.second.first;
            int j = temp.second.second;

            res.push_back({nums1[i], nums2[j]});

            if (j+1<m and visited.find({i,j+1}) == visited.end()){
                pq.push({nums1[i]+nums2[j+1],{i,j+1}});
                visited.insert({i,j+1});
            }

            if (i+1<n and visited.find({i+1,j}) == visited.end()){
                pq.push({nums1[i+1]+nums2[j],{i+1,j}});
                visited.insert({i+1,j});
            }
        }

        return res;
        
    }
};