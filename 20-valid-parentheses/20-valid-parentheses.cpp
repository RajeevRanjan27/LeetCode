
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' )
            {
                if(st.empty()||st.top()!='(')
                    return false;
                else
                     st.pop();
            }
            
            else if(s[i]=='}')
            {
                 if(st.empty() || st.top()!='{')
                    return false;
                else
                     st.pop();
            }
             else if(s[i]==']')
            {
                 if(st.empty()||st.top()!='[')
                    return false;
                else
                     st.pop();
            }
            
            
        }
        
        
        if(st.empty())
        {
            return true;
        }
        else 
            return false;
        
    }
};