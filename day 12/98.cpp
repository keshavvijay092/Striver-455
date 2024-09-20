class Solution {
public:
   
    int myAtoi(string s) {

         int n = s.size();
         int i = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }

        bool isNegative = false;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            isNegative = (s[i] == '-');
            i++;
        }

        long result = 0;
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            result = result * 10 + digit;
            
            // Check for overflow
            if (result > INT_MAX) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            i++;
        }

        return isNegative ? -result : result;
    }
};