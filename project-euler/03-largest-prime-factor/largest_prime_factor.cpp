// This program finds the largest prime factor of an integer i
#include <iostream>
#include <vector>

std::vector<bool> sieve_of_eratosthones(int max_val);

int main()
{
 // generate primes, check if they factor into i
}

std::vector<bool> sieve_of_eratosthones(int max_val)
{
  std::vector<bool> b_values(max_val);

  for (int i = 0; i < max_val; ++i)
    b_values[i] = true; // Initialize all vector values to true

  for (int i = 2; i*i < max_val; ++i)
  {
    if(b_values[i]) // ignore index values to false. Indexes = Multiples
      for (int j = i*i; j < max_val; j+=i)
      {
        b_values[j] = false; // set the multiples of i false
      }
  }

  return b_values;
}
