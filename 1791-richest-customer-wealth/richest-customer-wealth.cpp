class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>v;
        int n=accounts.size();
        for(int i=0;i<n;i++)
        {
             int s=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                s+=accounts[i][j];
            }
            v.push_back(s);
        }
        int m=*max_element(v.begin(),v.end());
        return m;
    }
};