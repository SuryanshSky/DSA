// Problem: 342. Power of Four
// Difficulty: Easy
// Approach: If n==0 return false. Keep dividing n by 4
//           while divisible. If n reduces to 1 -> true.
// Runtime: 0ms | Beats 100%

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0){
            return false;
        }
        while(n%4==0){
            n=n/4;
        }
        if(n==1){
            return true;
        }
        return false;
    }
};