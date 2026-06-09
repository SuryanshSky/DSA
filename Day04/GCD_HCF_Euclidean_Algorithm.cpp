// Topic: GCD / HCF using Euclidean Algorithm
// Time Complexity:  O(log(min(a,b)))
// Space Complexity: O(1)
// Approach: Repeatedly take remainder of a%b,
//           set a=b and b=remainder until b==0.
//           When b==0, a contains the GCD.

#include<iostream>
using namespace std;

int gcdIterative(int a, int b){
    a = abs(a);
    b = abs(b);
    while(b != 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){
    cout << gcdIterative(48, 18) << endl; // Output: 6
    cout << gcdIterative(12, 8)  << endl; // Output: 4
    return 0;
}