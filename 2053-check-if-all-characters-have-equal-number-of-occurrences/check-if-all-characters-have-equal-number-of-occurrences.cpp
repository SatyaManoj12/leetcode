class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        int flag=1;
        for(auto itr:mpp)
        {
            int res=itr.second;
            if(res!=mpp[s[0]]){
            flag=0;
            break;}
        }
        return flag;
        
    }
};