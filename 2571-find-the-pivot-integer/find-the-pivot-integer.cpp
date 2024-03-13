class Solution {
public:
    int pivotInteger(int n) {
      int s=0,pre=0;
      for(int i=1;i<=n;i++)
      {
        s+=i;
      }
      for(int i=1;i<=n;i++)
      {
        s-=i;
        if(pre==s)
        {
            return i;
        }
        pre+=i;
      }
      return -1;
    }
};