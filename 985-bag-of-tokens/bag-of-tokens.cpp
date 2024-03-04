class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0) return 0;
        sort(tokens.begin(),tokens.end());
        int s=0;
        //int max=*max_element(tokens.begin(),tokens.end());
       int i=0,j=tokens.size()-1;
       if(tokens[0]>power) return 0;
        //if(tokens.size()==1 and tokens[0]>power) return 0;
       int m = -1;

       while(i<=j)
       {
           if(tokens[i]<=power)
           {
               s+=1;
               power-=tokens[i];
               i++;
           }
           else
           {
               s-=1;
               power+=tokens[j];
               j--;
           }
           m = max(m, s);
       }
        return m;
    }
};