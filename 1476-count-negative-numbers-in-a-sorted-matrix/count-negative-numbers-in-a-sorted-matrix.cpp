class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int n=grid.size();
        for(auto itr:grid)
        {
            for(auto itr1:itr)
            {
                if(itr1<0)
                {
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};