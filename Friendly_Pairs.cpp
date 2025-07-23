#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

// Function to get sum of all divisors (including the number itself)
int sumOfDivisors(int n)
{
  vector<int> factors;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      factors.push_back(i);
      if (i != n / i)
        factors.push_back(n / i);
    }
  }

  int sum = 0;
  for (int f : factors)
    sum += f;

  return sum;
}

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // Step 1: Get sum of divisors
  int sumA = sumOfDivisors(a);
  int sumB = sumOfDivisors(b);

  // Step 2: Reduce both (sum / number) by GCD
  int gcdA = gcd(sumA, a);
  int gcdB = gcd(sumB, b);

  int numA = sumA / gcdA;
  int denA = a / gcdA;

  int numB = sumB / gcdB;
  int denB = b / gcdB;

  // Step 3: Compare reduced fractions
  if (numA == numB && denA == denB)
    cout << a << " and " << b << " are Friendly Pairs.\n";
  else
    cout << a << " and " << b << " are NOT Friendly Pairs.\n";

  return 0;
}
