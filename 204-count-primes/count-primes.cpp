class Solution {
public:
    int countPrimes(int n) {
        vector<int>v(n,1);
        int cnt=0;
        if(n==0 or n==1)
        {
            return cnt;
        }
        if(n==3)
        {
            return 1;
        }
     for(int i=2;i*i<n;i++)
     	{
             if(v[i]==1)
             {
                 for(int j=i*i;j<n;j=j+i)
                 {
                     v[j]=0;
                 }
             }
    	}
        for(int k=2;k<n;k++)
        {
            if(v[k]==1)
            {
                cnt+=1;
            }
        }
        return cnt;
    }
};