class Solution {
public:
    int reverse(long long x) {
        long long rem,rev=0;
        long long a=pow(-2,31),b=pow(2,31)-1;
     while(x!=0)
     {
         rem=x%10;
         if(rev<a/10 or rev>b/10)
        {
         return 0;
         }
         
         rev=rev*10+rem;
         x/=10;
     }   
    return rev;
    }
};