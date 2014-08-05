#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// No need to check 1-10, we know 2520 is divisible by all of those numbers,
// so any multiple of 2520 is also divisible by all of those numbers!

int main() {
  long n = 5040; //2520 + 2520
  while (((n % 19) != 0) || ((n % 18) != 0) || ((n % 17) != 0) || 
         ((n % 16) != 0) || ((n % 15) != 0) || ((n % 14) != 0) || 
         ((n % 13) != 0) || ((n % 12) != 0) || ((n % 11) != 0)) {
    n = n + 2520;
  }
  printf("The smallest positive number evenly divisible by 1-20 is:\n");
  printf("%ld\n", n);
}
