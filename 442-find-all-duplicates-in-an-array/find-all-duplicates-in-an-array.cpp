class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     map<int,int>mpp;
     for(int i=0;i<nums.size();i++)
     {
        mpp[nums[i]]++;
     }   
     vector<int>Res;
     for(auto itr:mpp)
     {
        if(itr.second>1)
        {
            Res.push_back(itr.first);
        }
     }
     return Res;
    }
};