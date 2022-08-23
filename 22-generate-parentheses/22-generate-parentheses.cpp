class Solution {
public:
     vector<string>res;
    
    void allpar(int open,int close,int n,string s)
    {
       
        if(open==n && close==n)
        {
             res.push_back(s);
            return;
        }
        if(open<n)
        {
            allpar(open+1,close,n,s+"(");
        }
        if(open>close)
        {
            allpar(open,close+1,n,s+")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        string s="";
        allpar(0,0,n,s);
        return res;
        
    }
};