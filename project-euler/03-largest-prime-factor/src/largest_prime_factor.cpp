// This program finds the largest prime factor of an integer i
#include <iostream>

void ui();
void inline error(const std::string& s);
uint64_t find_largest_prime_factor(uint64_t n);
bool is_prime(uint64_t n);

int main()
try {
  ui();
  return 0;
}
catch (std::exception& e) {
  std::cerr << "Error: " << e.what() << '\n';
  return 1;
}
catch (...) {
  std::cerr << "Error: Unknown exception\n";
  return 2;
}

void ui() {
  // ask for user input, validate, call find_largest_prime_factor, print answer
  // to console
  uint64_t number;
  std::cout << "Find largest prime factor of: ";
  std::cin >> number;

  // if input is prime, notify user
  if (is_prime(number)) { error("Number is prime"); }

  // print largest prime factor
  std::cout << "Answer: " << find_largest_prime_factor(number) << '\n';
}

void inline error(const std::string& s) { throw std::runtime_error(s); };

uint64_t find_largest_prime_factor(uint64_t n) {
  // finds a number's largest prime factor
  // pre-condition: n is +ve integer. n is not prime
  // post-condtion: return the largest prime factor
  // ----------------------------------------------
  uint64_t quotient;
  // the highest possible prime factor of that number is the quotient of number/2
  uint64_t divisor = 2;
  // loop condtion
  bool prime = false;
  // method: from number/(divisor ... n) check if the each quotient is prime. If
  // prime stop check and display quotient.
  while (!prime) {
    // check if the number/divisor evenly divides
    if (n%divisor == 0) {
      // track the current quotient
      quotient = n/divisor;
      // update the loop condtion
      prime = is_prime(quotient);
    }
    // increment the divisor
    ++divisor;
  }
  return quotient;
}

bool is_prime(uint64_t n) {
  // check primality using the simple 6k +/- 1 optimization. Reference at end.
  // pre-condition: n is a +ve integer
  // post-condition: return boolean indicator of n's primality
  // ---------------------------------------------------------
  if (n == 2 || n == 3) { return true; }
  if (n <= 1 || n % 2 == 0 || n % 3 == 0) { return false; }
  for (uint64_t i = 5; (i * i) <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) { return false; }
  }
  return true;
  // https://en.wikipedia.org/wiki/Primality_test
}
