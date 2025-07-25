#include <iostream>
#include <string>
using namespace std;

int main()
{
  string num;
  cin >> num;

  int decimal = 0;

  for (char ch : num)
  {
    decimal = decimal * 8 + (ch - '0');
  }

  cout << "Decimal: " << decimal << endl;
  return 0;
}
