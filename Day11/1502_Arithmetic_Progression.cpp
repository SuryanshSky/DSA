// Problem: 1502. Can Make Arithmetic Progression From Sequence
// Difficulty: Easy
// Approach: Sort the array. Calculate common difference d = arr[1]-arr[0].
//           Check if every consecutive pair has the same difference.
// Runtime: 0ms | Beats 100%

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int n = arr.size();

        int d = arr[1] - arr[0];

        for(int i = 2; i < n; i++){
            if(arr[i] - arr[i-1] != d){
                return false;
            }
        }
        return true;
    }
};