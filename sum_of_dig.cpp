class Solution
{
public:
  int sumOfDigits(int n)
  {
    // Code here
    int sum = 0;
    while (n != 0)
    {
      int dig = n % 10;
      sum += dig;
      n = n / 10;
    }

    return sum;
  }
};