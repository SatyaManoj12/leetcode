class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      int n=nums.size();
      int cnt=0;
      for(int i=0;i<n-1;i++)
      {
          int j=i+1;
          while(j<n)
          {
              if(nums[i]==nums[j])
              {
                  cnt++;
              }
              j++;
          }
      }
      return cnt;
    }
};