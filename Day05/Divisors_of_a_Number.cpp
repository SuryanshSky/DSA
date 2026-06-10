// Topic: Divisors of a Number
// Time Complexity:  O(sqrt(n))
// Space Complexity: O(1)
// Approach: Loop from 1 to sqrt(n). If i divides n,
//           print i and n/i (both are divisors).

#include<iostream>
using namespace std;

void divisors(int n){
    cout << "The divisors of " << n << " are: ";
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
            if(i != n/i)
                cout << n/i << " ";
        }
    }
    cout << "\n";
}

int main(){
    divisors(12); // Output: 1 12 2 6 3 4
    return 0;
}