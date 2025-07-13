// User function Template for C++

bool prime(int n)
{

  // Write your code here
  if (n == 0 || n == 1)
  {
    return false;
  }
  if (n == 2)
  {
    return true;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;

  // returns a boolean value
}