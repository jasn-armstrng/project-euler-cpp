/*
   Alternate (and faster) method to using the modulo operation:
   E.g. where x=3, y=5 and N=100
   1. Sum all multiples of 3 then 5 that are below N. Common multiples like 15 and 30 will be added twice.
   2. Subtract all multiples of 15 below N to eliminate one of the duplicates.
*/
unsigned long long sumMults(int x, int y, int N)
{
  unsigned long long sum_ = 0;
  int i = 1;
  while (i*x < N)
  {
    sum_ += i*x;
    i++;
  }

  int j = 1;
  while (j*y < N)
  {
    sum_ += j*y;
    j++;
  }

  int k = 1;
  while (k*(x*y) < N)
  {
    sum_ -= k*(x*y);
    k++;
  }

  return sum_;
}
