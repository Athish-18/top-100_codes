// User function Template for C++
class Solution
{
public:
  bool armstrongNumber(int n)
  {
    // code here
    int sum = 0;
    int x = n;
    while (x != 0)
    {
      int dig = x % 10;

      sum += dig * dig * dig;
      x = x / 10;
    }
    if (n == sum)
    {
      return true;
    }
    else
      return false;
  }
};