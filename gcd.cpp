class Solution
{
public:
  int gcd(int a, int b)
  {
    // code here
    if (a == b)
    {
      return a;
    }
    else if (a > b)
    {
      return gcd(a - b, b);
    }
    else
    {
      return gcd(a, b - a);
    }
  }
};
