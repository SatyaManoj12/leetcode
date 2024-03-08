class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        vector<int>cntvec;
        for(auto itr:mpp)
        {
            cntvec.push_back(itr.second);
        }
        int cnt=0;
        int max=*max_element(cntvec.begin(),cntvec.end());
       // int cnt=1;
        for(auto it:cntvec)
        {
            if(max==it)
            {
                cnt++;
            }
            cout<<it<<":"<<cnt<<" ";
        }
    return max*cnt;
    }
};