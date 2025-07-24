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
//use this code to find the greatest common divisor (GCD) of two numbers more useful
// This is a recursive implementation of the Euclidean algorithm for GCD
gcd(int a, int b)

    if (a == 0)
{
  return b;
}
if (b == 0)
{
  return a;
}

if (a == b)
{
  return a;
}
else if (a > b)
{
  if (a % b == 0)
  {
    return b;
  }
  else
  {
    return gcd(a - b, b);
  }
}
else if (b > a)
{
  if (b % a == 0)
  {
    return a;
  }
  else
  {
    return gcd(a, b - a);
  }
}
