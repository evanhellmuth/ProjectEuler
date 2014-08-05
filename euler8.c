#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Returns the product of array[index] and the following 12 elements of
// the array.
long long thirteenProduct(int *array, int index);

int main() {
  FILE *fp;
  int x[1000];
  int c;
  int i = 0;
  fp = fopen("/home/evan/ProjectEuler/euler8num.txt", "r");
  while ((c = getc(fp)) != EOF) {
    if (c == '\n') {
      ;
    }
    else {
      x[i++] = c - '0';
    }
  }
  fclose(fp);

  long long max = 0;
  long long contender;
  for (i = 0; i < (1000 - 12); i++) {
  contender = thirteenProduct(x, i);
    if (contender > max) {
      max = contender;
    }
  }

  printf("The maximum product of thirteen adjacent digits in the given");
  printf("number is: \n%lld\n", max);

}

// Just going to brute force this one...
long long thirteenProduct(int *x, int start) {
  long long product = x[start];
  int i;
  for (i = 1; i < 13; i++) {
    product = product * x[start + i];
  }
  
  return product;
}
