class Solution
{
public:
  int reverseDigits(int n)
  {
    // Code here
    int rev = 0;
    while (n != 0)
    {
      int dig = n % 10;
      rev = rev * 10 + dig;
      n = n / 10;
    }
    return rev;
  }
};