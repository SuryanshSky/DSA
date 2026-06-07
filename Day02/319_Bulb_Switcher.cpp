// Problem: 319. Bulb Switcher
// Difficulty: Medium
// Approach: A bulb stays ON only if toggled odd number of times.
//           This happens only at perfect square positions.
//           So the answer is simply sqrt(n).
// Runtime: 0ms | Beats 100%

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};