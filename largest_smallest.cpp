// User function Template for C++
class Solution
{
public:
  pair<int, int> getMinMax(vector<int> arr)
  {
    // code here
    int minimum = arr[0];
    int maximum = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
      maximum = max(arr[i], maximum);
      minimum = min(arr[i], minimum);
    }
    return {minimum, maximum};
  }
};