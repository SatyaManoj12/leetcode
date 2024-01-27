class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int i=0;
        int cnt=0;
        int j=k-1;
        while(j<s.size())
        {
            string res=s.substr(i,k);
            if( stoi(res)!=0&& num%(stoi(res))==0)
            {
                cnt++;
            }
            i++;
            j++;
        }
        return cnt;
        
    }
};