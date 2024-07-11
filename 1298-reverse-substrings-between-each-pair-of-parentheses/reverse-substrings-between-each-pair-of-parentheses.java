class Solution {
    public String reverseParentheses(String s) {
        Stack<StringBuilder>st=new Stack<>();
        StringBuilder current=new StringBuilder();
        for(char c:s.toCharArray())
        {
            if(c=='(')
            {
                st.push(current);
                current=new StringBuilder();
            }
            else if(c==')')
            {
                current.reverse();
                current=st.pop().append(current);
            }
            else
            {
                current.append(c);
            }
        }
        return current.toString();
    }
}