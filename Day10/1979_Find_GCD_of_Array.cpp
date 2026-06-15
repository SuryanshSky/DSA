// Problem: 1979. Find Greatest Common Divisor of Array
// Difficulty: Easy
// Approach: Sort the array to find min and max easily.
//           Apply Euclidean Algorithm on min and max.
// Runtime: 0ms | Beats 100%

class Solution {
public:
    int gcd(int a, int b){
        a = abs(a);
        b = abs(b);
        while(b != 0){
            int remainder = a % b;  // Calculate remainder
            a = b;                  // Update a to b
            b = remainder;          // Update b to remainder
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min, max;
        min = nums[0];
        max = nums[nums.size()-1];
        return gcd(min, max);
    }
};
