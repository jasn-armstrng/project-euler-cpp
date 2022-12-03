// This program finds the largest prime factor of an integer i
#include <iostream>

bool is_prime(uint64_t n);

int main()
{
  // number to find the highest prime factor of
  uint64_t number;
  // the highest possible prime factor of that number is the quotient of number/2
  uint64_t divisor = 2;

  // largest factor
  uint64_t quotient = -1;

  // prime flag
  bool prime = false;

  // ask user for input
  std::cout << "Find largest prime factor of: ";
  std::cin >> number;

  // if input is prime, notify user
  if (is_prime(number)) {
    std::cout << "Error: Number is prime\n";
    return 0;
  }

  // method 1: from divisor ... n check if the quotient is prime. If prime stop
  // check and display quotient.
  while (!prime) {
    // check if the number/divisor evenly divides
    if (number%divisor == 0) {
      // end iteration of quotient is prime
      quotient = number/divisor;
      prime = is_prime(quotient);
    }
    // increment the divisor
    ++divisor;
  }
  std::cout << "Answer: " << quotient << '\n';
  return 0;
}

bool is_prime(uint64_t n) {
  // check primality using the simple 6k +/- 1 optimization. Reference at end.
  // pre-condition: n is a +ve integer
  // post-condition: return boolean indicator of n's primality
  if (n == 2 || n == 3) { return true; }
  if (n <= 1 || n % 2 == 0 || n % 3 == 0) { return false; }
  for (uint64_t i = 5; (i * i) <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0) { return false; }
  }
  return true;
  // https://en.wikipedia.org/wiki/Primality_test
}
