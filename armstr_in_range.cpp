#include <bits/stdc++.h>
using namespace std;
int calcArmstr(int n)
{
  int sum = 0;
  int x = n;
  while (x != 0)
  {
    int dig = x % 10;
    sum += dig * dig * dig;
    x = x / 10;
  }
  if (sum == n)
  {
    return n;
  }
  else
  {
    return -1;
  }
}
void giveArmstr(int ip1, int ip2)
{
  for (int i = ip1; i <= ip2; i++)
  {
    int res = calcArmstr(i);
    if (res != -1)
    {
      cout << calcArmstr(i) << " ";
    }
  }
}
int main()
{
  // your code goes here
  int ip1;
  int ip2;
  cin >> ip1 >> ip2;

  giveArmstr(ip1, ip2);
  return 0;
}
