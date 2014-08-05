#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n = 100;
  long sum = (n * (n + 1)) >> 1;
  long sum_squared = (sum * sum);

  long squares_summed = 0;
  for (n = n; n > 0; n--) {
    squares_summed += (n * n);
  }
  
  printf("Sum of squares from 1 to %d is: %ld\n", n, squares_summed);
  printf("Square of sums from 1 to %d is: %ld\n", n, sum_squared);
  printf("Difference between the two:\n%ld\n", (sum_squared - squares_summed));
}
