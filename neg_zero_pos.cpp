#include <iostream>
using namespace std;

int ans(int n)
{

  if (n < 0)
  {
    return -1;
  }
  else if (n == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  int num;
  cin >> num;

  int a = ans(num);

  if (a == -1)
  {
    cout << "Negative";
  }

  else if (a == 0)
  {
    cout << "Zero";
  }

  else
  {
    cout << "Positive";
  }
  return 0;
}
