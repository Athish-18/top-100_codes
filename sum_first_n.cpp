// C++ program to find sum of first
// n natural numbers.
#include <iostream>
using namespace std;

// Returns sum of first n natural
// numbers
int findSum(int n)
{
  int s = 0;
  s = n * (n + 1) / 2; // sum of first n natural = n(n+1)/2
  return s;            // sum of first n-1 nat =n(n-1)/2
}

// Driver code
int main()
{
  int n = 5;
  cout << findSum(n);
  return 0;
}