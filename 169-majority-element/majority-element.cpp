class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,cnt=0;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int mx=0,m;
        for(auto itr:mpp)
        {
            if(itr.second>mx)
            {
                mx=itr.second;
                m=itr.first;
            }
        }
        return m;
    }
};