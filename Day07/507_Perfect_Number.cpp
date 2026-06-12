// Problem: 507. Perfect Number
// Difficulty: Easy
// Approach: Sum all divisors from 1 to num-1.
//           If sum equals num -> Perfect Number!
// Runtime: 0ms | Beats 100%

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        return sum == num;
    }
};
