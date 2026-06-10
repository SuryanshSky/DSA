// Topic: Prime Numbers using Sieve of Eratosthenes
// Time Complexity:  O(n log log n)
// Space Complexity: O(n)
// Approach: Start from 2. For each prime number,
//           mark all its multiples as non-prime.
//           Numbers remaining unmarked are primes.

#include<iostream>
using namespace std;

void primeSieve(int n){
    int prime[100] = {0};
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(int j = i*i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}
// Input:  30
// Output: 2 3 5 7 11 13 17 19 23 29