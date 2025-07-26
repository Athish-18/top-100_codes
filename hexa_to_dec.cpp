#include <cmath>
class Solution
{
public:
  int hexadecimalToDecimal(string &b)
  {
    // Code here.
    int hexa = 0;
    for (ch : b)
    {
      hexa = hexa * 16 + ch - '0'; // converts string to number
    }
    return hexa;
  }
};