#include <cmath>
class Solution
{
public:
  int binaryToDecimal(string &b)
  {
    // Code here.
    int decimal = 0;
    for (ch : b)
    {
      decimal = decimal * 2 + ch - '0'; // converts string to number
    }
    return decimal;
  }
};