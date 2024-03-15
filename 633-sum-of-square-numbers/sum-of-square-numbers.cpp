class Solution {
public:
    bool judgeSquareSum(long long c) {
      long long i=0;
      long long j=sqrt(c);
      if(c==0 or c==1) return true;
      int f=0;
      while(i<=j)
      {
        if(i*i+j*j==c)
        {
            f=1;
            break;
        }
        else if(i*i+j*j<c)
        {
            i++;
        }
        else 
        {
            j--;
        }
      }
      if(f==1) return true;
      else return false;
    }
};