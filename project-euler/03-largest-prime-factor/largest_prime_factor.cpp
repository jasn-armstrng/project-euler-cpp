// This program finds the largest prime factor of an integer i
#include <iostream>
#include <vector>

bool is_prime(long number);

int main()
{
 std::cout << is_prime(7) << '\n';
}

bool is_prime(long number)
{
  if (number < 2) { return false; };
  if (number == 2) { return true; }
  if (number % 2 == 0) { return false; }
  for (long i = 3; (i*i) <= number; i+=2)
  {
    if (number % i == 0) { return false; }
  }
  return true;
}
