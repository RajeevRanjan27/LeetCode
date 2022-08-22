class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]== "/")
            {
                int op1=st.top();st.pop();
                int op2=st.top();st.pop();
                if(tokens[i]=="+")op2+=op1;
                if(tokens[i]=="-")op2-=op1;
                if(tokens[i]=="*")op2*=op1;
                if(tokens[i]=="/")op2/=op1;
                st.push(op2); 
            }
            else 
            {
                st.push(stoi(tokens[i]));
            }
            
        }
        return st.top();
        
    }
};