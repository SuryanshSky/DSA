// Problem: 69. Sqrt(x)
// Difficulty: Easy
// Approach: Binary Search
// Runtime: 0ms | Beats 100%

class Solution {
public:
    int binarySearch(long long int n){
        long long int s = 1;
        long long int e = n;
        long long int mid = (s+e)/2;
        long long int ans = -1;

        while(s <= e){
            long long int square = mid * mid;
            if(square == n){
                return mid;
            }
            if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = (s+e)/2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarySearch(x);
    }
};