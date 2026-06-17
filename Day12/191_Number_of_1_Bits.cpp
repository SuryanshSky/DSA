// Problem: 191. Number of 1 Bits
// Difficulty: Easy
// Approach: Use bitwise AND with 1 to check last bit.
//           Right shift n by 1 each iteration.
//           Count how many times the last bit was 1.
// Runtime: 0ms | Beats 100%

class Solution {
public:
    int hammingWeight(int n) {
        int bit = 0;
        while(n != 0){
            if(n & 1){
                bit++;
            }
            n = n >> 1;
        }
        return bit;
    }
};