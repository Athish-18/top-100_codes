#include <iostream>
using namespace std;

int main()
{
  // code here
  int a;
  int b;
  int c;
  cin >> a >> b >> c;
  if (a >= b && a >= c)
  {
    cout << a;
  }
  else if (b >= a && b >= c)
  {
    cout << b;
  }
  else
  {
    cout << c;
  }

  return 0;
}