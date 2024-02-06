class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<string>v;
       vector<vector<string>>res;
       unordered_map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++)
        {
             string s=strs[i];
             sort(s.begin(),s.end());
             mpp[s].push_back(strs[i]);
        }
        for(auto itr:mpp)
        {
            res.push_back(itr.second);
        }       
        return res;
    }
};