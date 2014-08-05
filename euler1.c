#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x = 3;
  int y = 5;
  int overCount = x * y;
  int upto = 999;
  int n; // Will change for each summation.

  n = upto / x;
  int sumx = x * sumOneToN(n);

  n = upto / y;
  int sumy = y * sumOneToN(n);

  n = upto / overCount;
  int sumOverCount = overCount * sumOneToN(n);

  printf("The sum of all multiples of %d or %d below %d we get:\n%d\n",
          x, y, upto + 1, ((sumx + sumy) - sumOverCount));
  
}

int sumOneToN(int n) {
  return (n * (n + 1)) / 2;
}
