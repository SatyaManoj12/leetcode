class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
       	if(n%2!=0 or s[0]==']' or s[0]=='}' or s[0]==')')
    	{
            return false;
    	}
     	for(int i=0;i<n;i++)
    	{                                       		
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty()) {
              if(s[i]==')' and st.top()=='(' or s[i]==']' and st.top()=='[' or s[i]=='}' and st.top()=='{' ) 
                {
                        st.pop();
                }
                else return false;
                 }
                 else return false;
            }
        }
                if(st.empty())
                {
                 return true;
                }
                else
                {
                    return false;                                                                                                                                                                                                                                                                                                                                                    		
                }   
    return 0;
    }   
};