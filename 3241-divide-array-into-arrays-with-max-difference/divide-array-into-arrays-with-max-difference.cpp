class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i;
        vector<vector<int>>v;
        vector<int>ans;
        for(i=0;i<n;i+=3)
        {
            int j=i;
            int l=j+1;
            int m=j+2;
            if(abs(nums[j]-nums[l])<=k and abs(nums[j]-nums[m])<=k and abs(nums[l]-nums[m])<=k )
            {
                ans.push_back(nums[j]);
                ans.push_back(nums[l]);
                ans.push_back(nums[m]);
            }
            else
            {
                break;
            }
            v.push_back(ans);
            ans.clear();
        }
        if(i!=n) v.clear();
        return v;
        
    }
};