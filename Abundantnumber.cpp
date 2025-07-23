#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int abundantnum;
  cin >> abundantnum;

  vector<int> factors;

  // Find all proper divisors
  for (int i = 1; i <= sqrt(abundantnum); i++)
  {
    if (abundantnum % i == 0)
    {
      if (i != abundantnum)
      {
        factors.push_back(i);
      }
      int paired = abundantnum / i;
      if (paired != i && paired != abundantnum)
      {
        factors.push_back(paired);
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < factors.size(); i++)
  {
    sum += factors[i];
  }

  if (sum > abundantnum)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }

  return 0;
}
