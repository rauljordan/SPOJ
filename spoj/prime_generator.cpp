#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstring>

void sieve(int low, int high) {
  bool prime[high + 1];
  memset(prime, true, sizeof(prime));

  for (int p = low; p * p < high + 1; p++) {
    // If prime[p] is not changed, then it is a prime
    if (prime[p] == true) {
      // Update all multiples of p
      for (int i = p * 2; i < high + 1; i += p) {
        prime[i] = false;
      }
    }
  }

  // Print all prime numbers
  for (int p = low; p < high + 1; p++) {
    if (prime[p]) {
      std::cout << p << std::endl;
    }
  }
}

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int low;
    int high;
    scanf("%d %d", &low, &high);
    if (low == 1) {
      sieve(2, high);
      std::cout << std::endl;
    }
    else {
      sieve(low, high);
      std::cout << std::endl;
    }
  }
}
