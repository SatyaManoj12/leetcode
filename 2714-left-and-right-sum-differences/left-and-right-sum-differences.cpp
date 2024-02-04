class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>pre;
        pre.push_back(0);
        vector<int>suf(nums.size(),0);
        vector<int>res;
        int s=0,S=0,diff,i,j,k;
        for(i=0;i<nums.size()-1;i++)
        {
            s+=nums[i];
            pre.push_back(s);
        }
         for(j=nums.size()-1;j>0;j--)
         {
            S+=nums[j];
            suf[j - 1]=S;
         }
         
         for(k=0;k<nums.size();k++)
         {
            diff=abs(pre[k]-suf[k]);
            res.push_back(diff);
         }
         return res;
    }
};