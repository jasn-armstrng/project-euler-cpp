// This program find the largest palindrome product of two 3-digit numbers less
// than n. This is the Hackerrank version of this question.

// - First approach: Do nested iteration - 100 ... 999 * 100 ... 999
// - Check if each product is palindrome and less than n
// - Store the first palindrome. Replace the first palindrome with a subsequent
//   higher and so on

// Functions: one to reverse an int, one to compare magnitude of previous to the
// current palindrome
#include <iostream>

int palindrome_product(int n);
int reverse_integer(const int n);
int max(const int m, const int n);

int main() {
  std::cout << palindrome_product(998001) << '\n'; // Ans: 906609
  std::cout << palindrome_product(800000) << '\n'; // Ans: 793397
  return 0;
}

int palindrome_product(int n) {
  // find the largest palindrome product of two 3-digit numbers less than n
  // pre-conditions: n is a +ve integer <= 998001
  // post-condtions: return the largest palindrome
  int palindrome = 0;
  for (int i = 100; i < 1000; ++i) {
    for (int j = 100; j < 1000; ++j) {
      int product = i*j;
      if (product == reverse_integer(product) && product < n) {
        palindrome = max(palindrome, product);
      }
    }
  }
  return palindrome;
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

int max(const int m, const int n) {
  // find the max of two numbers.
  // pre-conditions: m and n are real numbers
  // post-conditions: return m or n. If both numbers are equal, default to m
  if (m < n) { return n; }
  return m;
};
