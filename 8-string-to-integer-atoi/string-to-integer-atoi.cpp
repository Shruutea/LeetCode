#include <climits>
#include <string>

class Solution {
public:
    int parseDigits(const std::string& s, int i, int result, int sign) {
        if (i >= s.size() || s[i] < '0' || s[i] > '9') {
            return result * sign;
        }

        int digit = s[i] - '0';
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        return parseDigits(s, i + 1, result * 10 + digit, sign);
    }

    int myAtoi(std::string s) {
        int i = 0;
        int n = s.size();

        while (i < n && s[i] == ' ') i++;

        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        return parseDigits(s, i, 0, sign);
    }
};