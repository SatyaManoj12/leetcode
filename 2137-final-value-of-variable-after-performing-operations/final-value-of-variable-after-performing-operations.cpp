class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
   for(auto itr:operations)
   {
       if(itr=="X--" or itr=="--X")
       {
           ans--;
       }
       else 
       {
           ans++;
       }
   }
   return ans;
    }
};