// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int prev1=0;
        int prev2=1;
        int cur;
        
        if (n<0)
        {
            return -1;
        }
        
        if (n==0)
        {
            return 0;
        }
        
        if (n==1)
        {
            return 1;
        }
        
        if (n>1)
        { for(int i=2;i<=n;i++)
             {cur=prev1+prev2;
            prev1=prev2;
            prev2=cur;
             }
        }
        return cur;
    }
};