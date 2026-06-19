// Problem: 7. Reverse Integer
// Difficulty: Medium
// Approach: Extract digits one by one using x%10.
//           Before adding, check for overflow using
//           INT_MAX/10 and INT_MIN/10.
//           Build reversed number using ans*10 + digit.
// Runtime: 0ms | Beats 100%

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while(x != 0){
            int digit = x % 10;

            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }

            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};