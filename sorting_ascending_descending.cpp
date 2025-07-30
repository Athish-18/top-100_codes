#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }

    // Step 1: Sort entire array
    sort(arr.begin(), arr.end());

    // Step 2: Reverse second half
    int mid = size / 2;
    reverse(arr.begin() + mid, arr.end());

    // Step 3: Output the result
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl; // For the next test case output
  }

  return 0;
}
