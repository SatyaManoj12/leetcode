class Solution {
public:
bool palin(string s)
{
    int flag=0;
    int i=0;
    int j=s.size()-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            flag=1;
            i++;
            j--;
        }
        else if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
    string firstPalindrome(vector<string>& words) {
        string res="";
        for(int i=0;i<words.size();i++)
        {
            if(palin(words[i])==true)
            {
                res=words[i];
                break;
            }
        }
        return res;
    }
};