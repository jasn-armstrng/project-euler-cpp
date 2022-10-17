/*
  PE 1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9.
  The sum of these multiples is 23.
  Find the sum of all the multiples of 3 or 5 below N.

  Constraints: 1 <= N <= 10^9
*/

#include <iostream>
#include <math.h>

unsigned long long mult(int x, int y, int N)
/*
   Alternate (and faster) method to using the modulo operation:
   1. Sum all multiples of 3 then 5 that are below N. Common multiples like 15 and 30 will be added twice.
   2. Subtract all multiples of 15 below N to eliminate one of the duplicates.
*/
{
  unsigned long long sumOfMultiples = 0;
  int i = 1;
  while (i*x < N)
  {
    sumOfMultiples += i*x;
    i++;
  }

  int j = 1;
  while (j*y < N)
  {
    sumOfMultiples += j*y;
    j++;
  }

  int k = 1;
  while (k*(x*y) < N)
  {
    sumOfMultiples -= k*(x*y);
    k++;
  }

  return sumOfMultiples;
}

int main()
{
  std::cout << mult(3, 5, pow(10, 9)) << std::endl;
}
