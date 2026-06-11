// Topic: Catalan Numbers
// Formula: Cn = (1/n+1) * C(2n, n)
// Time Complexity:  O(4^n)
// Space Complexity: O(n)
// Approach: Use recursion. Catalan(n) = sum of
//           Catalan(i) * Catalan(n-i-1) for i = 0 to n-1
// Base Case: Catalan(0) = Catalan(1) = 1

#include<iostream>
using namespace std;

unsigned long long catalan(unsigned int n){
    if(n == 0 || n == 1)
        return 1;

    unsigned long long catalan_num = 0;
    for(int i = 0; i < n; i++)
        catalan_num += catalan(i) * catalan(n-i-1);

    return catalan_num;
}

int main(){
    unsigned int n = 5;
    unsigned long long result = catalan(n);
    cout << "The " << n << "th Catalan number is: " << result;
    return 0;
}
// Output: The 5th Catalan number is: 42

// Dry Run:
// Catalan(0) = 1  (base case)
// Catalan(1) = 1  (base case)
// Catalan(2) = 1*1 + 1*1 = 2
// Catalan(3) = 1*2 + 1*1 + 2*1 = 5
// Catalan(4) = 1*5 + 1*2 + 2*1 + 5*1 = 14
// Catalan(5) = 1*14 + 1*5 + 2*2 + 5*1 + 14*1 = 42