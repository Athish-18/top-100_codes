// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void comp_num(int a, int b)
{
  if (a > b)
  {
    cout << a << " is greater than " << b;
  }
  else if (a == b)
  {
    cout << b << " is equal " << a;
  }
  else
  {
    cout << b << " is greater than " << a;
  }
}
int main()
{
  // Write C++ code here
  // std::cout << "Try programiz.pro";
  int a;
  int b;
  cin >> a >> b;
  comp_num(a, b);
  return 0;
}