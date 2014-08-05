#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n_two = 1;
  int n_one = 2;
  int n;
  int sum = 2; // Counting n_one because it is even

  while (n <= 4000000) {
    n = n_one + n_two;
    if ((n % 2) == 0)
      sum += n;
    n_two = n_one;
    n_one = n;
  }
  printf("Sum of even Fibonacci numbers less than or equal to four million:\n%d\n", sum);
}
