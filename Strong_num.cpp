class Solution
{
public:
  int factorial(int n)
  {
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
      f = f * i;
    }
    return f;
  }
  int isStrong(int N)
  {
    // code here
    int ori = N;
    int sum = 0;
    while (N != 0)
    {
      int dig = N % 10;
      sum = sum + factorial(dig);

      N = N / 10;
    }
    if (sum == ori)
    {
      return 1;
    }

    else
    {
      return 0;
    }
  }
};