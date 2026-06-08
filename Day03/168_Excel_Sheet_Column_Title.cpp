// Problem: 168. Excel Sheet Column Title
// Difficulty: Easy
// Approach: Similar to base-26 conversion.
//           Decrement columnNumber by 1 (0-based index),
//           find remainder, map to character, divide by 26.
//           Reverse the result at the end.
// Runtime: 0ms | Beats 100%

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber > 0){
            columnNumber--;
            int remainder = columnNumber % 26;
            char ch = 'A' + remainder;
            result += ch;
            columnNumber /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};