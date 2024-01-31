class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
       stack<int>s;
       int n=t.size();
       vector<int>a(n,0);
       s.push(n-1);
       for(int i=n-2;i>=0;i--)
       {
           while(!s.empty() and t[s.top()]<=t[i])
           {
               a[i]=1;
               s.pop();
           }
           if(!s.empty())
           {
               int x=abs(s.top()-i);
               a[i]=x;
           }
           else
           {
               a[i]=0;
           }
           s.push(i);
       }
       return a;
    }
};