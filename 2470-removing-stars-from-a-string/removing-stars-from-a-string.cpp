class Solution {
public:
    string removeStars(string s) {
        string s1 ;
        for (int i:s){
            if (!s1.empty() and i == '*'){
                s1.pop_back();
            } else {
                s1.push_back(i);
            }
        }

        return s1;
    }
};