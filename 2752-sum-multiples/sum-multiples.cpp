class Solution {
public:
    int sumOfMultiples(int n) {
        int s=0;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 or i%7==0 or i%5==0)
            {
                s+=i;
            }
        }
        return s;
    }
};