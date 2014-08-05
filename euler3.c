#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Take advantage of the fact that each integer has a unique
// prime factorization.
int main() {
  long euler_special = 600851475143;
  long i;
  long largest_prime_factor;
  for (i = 3; i < euler_special; i += 2) {
    if (isPrime(i)) {
      if ((euler_special % i) == 0) {
        euler_special = (euler_special / i);
      }
    }
  }
  printf("The largest prime factor of 600851475143 is:\n%ld\n",
         euler_special);
}

int isPrime(long num) {
  if ((num == 0) || ((num % 2) == 0)) {
    return 0;
  }
  long i;
  long max_num = (num / 2);
  for (i = 3; i < max_num; i++) {
    if ((num % i) == 0)
      return 0;
  }
  return 1;
}
