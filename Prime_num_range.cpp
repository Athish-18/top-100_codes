#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
  if (num < 2)
    return false;
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}

// Generate primes between m and n
void primeGen(int m, int n)
{
  for (int i = m; i <= n; i++)
  {
    if (isPrime(i))
    {
      cout << i << endl;
    }
  }
}

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int m, n;
    cin >> m >> n;
    primeGen(m, n);
    cout << endl;
  }

  return 0;
}
