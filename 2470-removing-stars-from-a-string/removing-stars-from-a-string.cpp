class Solution {
public:
    string removeStars(string s) {
        std::stack<char> stack;

        for (int i = 0 ;i<s.size(); i++){
            if (s[i] == '*' and !stack.empty()){
                stack.pop();
            } else {
                stack.push(s[i]);
            }
        }

        std::string s1;
        int n = stack.size();
        for (int i =0 ;i<n;i++){
            s1 += stack.top();
            stack.pop();
        }
        std::reverse(s1.begin(),s1.end());
        return s1;
    }
};