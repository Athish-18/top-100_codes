
class Solution
{
public:
  string is_AutomorphicNumber(int n)
  {
    // Code here
    string s = "Automorphic";
    string sr = "Not Automorphic";
    int square = n * n;
    int dig_sq = square % 10;
    int dig_auto = n % 10;
    if (dig_sq == dig_auto)
    {
      return s;
    }
    return sr;
  }
};