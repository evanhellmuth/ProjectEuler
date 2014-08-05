#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Allocate a whole lot of memory on the stack:
  long long primes[10001];
  
  primes[0] = 2;
  primes[1] = 3;
  primes[2] = 5;
  primes[3] = 7;
  primes[4] = 11;
  primes[5] = 13;
  int next_prime_index = 6;

  unsigned long long max_double_long = 18446744000000000000;

  // See if each odd number has any prime factors, if not it is the next prime
  long long i;
  for (i = 15; i < max_double_long; i += 2) {
    // Assume i is prime to begin with
    int isprime = 1;
    int j;
    for (j = 1; j < next_prime_index; j++) {
      if ((i % primes[j]) == 0) {
        // i is not prime since it has a prime factor
        isprime = 0;
        break;
      }
    }
    if (isprime) {
      primes[next_prime_index++] = i;
      if (next_prime_index > 10000) {
        break;
      }
    }
  }
  printf("The 10001st prime number is:\n%lld\n", primes[10000]);
}
