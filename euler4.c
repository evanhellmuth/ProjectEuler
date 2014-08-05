#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i;
  int j;
  long largest = 0;
  long contender;
  for (i = 999; i > 99; i--) {
    for (j = i; j > 99; j--) {
      if (contender = isPalindrome(i * j)) {
        if (contender > largest) {
          largest = contender;
        }
      }
    }
  }

  printf("The largest palindromic product of two 3-digit numbers is:\n");
  printf("%ld\n", largest);
}

// Return n if n (assuming n is a positive integer) is a palindromic number
// Otherwise return 0
int isPalindrome(long n) {
  // From Stackoverflow
  long x = n; //save the value of n
  long reversed = 0;
  while (n > 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n = n / 10;
  }
  if (x == reversed)
    return x;
  else
    return 0;
}


/*

  long x = n;
  int digit_count = 0;
  while (n > 0) {
    n = n / 10;
    digit_count++;
  }
  int digits[digit_count];

*/
