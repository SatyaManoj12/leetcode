class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        if(s.size()==1) return 1;

        while(i<j and s[i]==s[j])
        {
            while(s[i]==s[i+1] and i<j){
           i++;}
           while(s[j]==s[j-1] and i<j){
           j--;}
           i++;
           j--;
        }
        return max(0, j-i+1);
    }
};