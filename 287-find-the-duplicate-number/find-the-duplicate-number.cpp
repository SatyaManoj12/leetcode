class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       map<int,int>mpp;
       for(int i=0;i<nums.size();i++)
       {
           mpp[nums[i]]++;
       }
       for(auto itr:mpp)
       {
           if((itr.second)>1)
           {
               return itr.first;
           }
       }
       return 0;
    }
};