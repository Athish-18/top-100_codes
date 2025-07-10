#include <iostream>
using namespace std;

int calcsum(int a, int b)
{
  if (a > b)
    swap(a, b);
  return (b - a + 1) * (a + b) / 2;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << calcsum(a, b);
  return 0;
}
