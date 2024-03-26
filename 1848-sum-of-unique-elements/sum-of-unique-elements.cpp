class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mpp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto itr:mpp)
        {
            if(itr.second==1)
            {
                sum+=itr.first;
            }
        }
        return sum;
    }
};