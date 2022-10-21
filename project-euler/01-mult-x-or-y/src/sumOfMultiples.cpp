/*
   Alternate (and faster) method to using the modulo operation:
   E.g. where x=3, y=5 and N=100
   1. Sum all multiples of 3 then 5 that are below N. Common multiples like 15 and 30 will be added twice.
   2. Subtract all multiples of 15 below N to eliminate one of the duplicates.
*/
#include <cstdint>

uint64_t sumMults(int x, int y, uint64_t N)
{
  uint64_t sum_ = 0;
  uint64_t i, j, k;

  for (i = x; i < N; i += x){
    sum_ += i;
  }

  for (j = y; j < N; j += y){
    sum_ += j;
  }

  for (k = (x*y); k < N; k += (x*y)){
    sum_ -= k;
  }

  return sum_;
}
