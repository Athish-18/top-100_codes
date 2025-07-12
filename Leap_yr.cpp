class Solution
{
public:
  bool checkYear(int n)
  {
    // code here
    if (n % 400 == 0) // if its div by 400 --leap year
    {
      return true;
    }
    else if (n % 4 == 0 && n % 100 != 0) // if div by 4 and not div by 100-- leap year
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};