#include <iostream>
using namespace std;

long long calc_gcd(long long a, long long b)
{
  return b == 0 ? a : calc_gcd(b, a % b); // Euclidean algorithm
}

int main()
{
  long long num1, num2;
  cin >> num1 >> num2;

  long long gcd = calc_gcd(num1, num2);
  long long lcm = (num1 / gcd) * num2; // Avoid overflow

  cout << lcm << endl;
  return 0;
}
