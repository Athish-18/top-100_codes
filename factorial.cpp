class Solution
{
public:
  int isFactorial(int N)
  {
    // code here
    int f = 1;
    for (int i = N; i > 0; i--)
    {
      f = f * i;
    }
    return f;
  }
};