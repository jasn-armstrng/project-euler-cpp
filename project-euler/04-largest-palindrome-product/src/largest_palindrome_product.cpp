// This program find the largest palindrome product of two 3-digit numbers

// First approach: mult each element of 100 ... 999 * each in 999 ... 100
// check if each product is palindrome
// store the first palindrome. replace the first palindrome with a subsequent
// higher and so on

// What I need: a function to reverse an int, a function to compare magnitude
// of previous to the current palindrome
#include <iostream>

int reverse_integer(const int n);

int main() {

  std::cout << reverse_integer(631) << '\n';
  return 0;
}

int reverse_integer(const int n) {
  // reverse a +ve integer
  // pre-conditions: n is a +ve integer
  // post-conditions: returns the reverse of n
  int number = n, reverse = 0, last_digit;
  while (number > 0) {
    // 1. isolate the last digit in the number
    last_digit = number%10;
    // 2. append last_digit to reverse
    reverse = reverse*10 + last_digit;
    // 3. remove the last digit from the number
    number = number/10;
    // 4. repeat 1-3 until number = 0
  }
  return reverse;
}
