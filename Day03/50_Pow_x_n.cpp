// Problem: 50. Pow(x, n)
// Difficulty: Medium
// Approach: Fast Power (Binary Exponentiation)
//           If n is even -> solve(x*x, n/2)
//           If n is odd  -> x * solve(x*x, (n-1)/2)
//           If n is negative -> solve(1/x, -n)
// Runtime: 0ms | Beats 100%

class Solution {
public:
    double solve(double x, long n){
        if(n==0){
            return 1;
        }
        if(n<0){
            return solve(1/x,-n);
        }
        if(n%2==0){
            return solve(x*x,n/2);
        }
        else{
            return x*solve(x*x,(n-1)/2);
        }
    }
    double myPow(double x, int n) {
        return solve(x,(long)n);
    }
};