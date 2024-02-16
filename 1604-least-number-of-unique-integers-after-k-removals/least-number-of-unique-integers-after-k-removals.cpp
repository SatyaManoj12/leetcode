class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mpp;
        for(auto kv:arr)
        {
            mpp[kv]++;
        }
        vector<pair<int,int>>vp;
        for(auto i:mpp)
        {
            vp.push_back({i.second,i.first});
        }
       sort(vp.begin(),vp.end());
       int cnt=0;
       for(auto &itr:vp)
       {
           while(k>0 and itr.first>0)
           {
                   itr.first=itr.first-1;
                    k--;
           }
           if(k==0)
           {
               break;
           }
       }
       for(auto traveller:vp)
       {
           if(traveller.first>0)
           cnt++;
       }
       return cnt;
        
    }
};