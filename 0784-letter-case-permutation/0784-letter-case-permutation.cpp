class Solution {
public:
    
    void rajeev(string ip,string op, vector<string>&res)
    {
        if(ip.size()==0)
        {
            res.push_back(op);
            return;
            
        }
        
        
        if(isalpha(ip[0])){
        string op1=op;
        string op2=op;
            op1.push_back(toupper(ip[0]));
            op2.push_back(tolower(ip[0]));
            ip.erase(ip.begin()+0);
            rajeev(ip,op1,res);
            rajeev(ip,op2,res);
            return;
            
        }
        else{
            string op3=op;
            op3.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            rajeev(ip,op3,res);
            return;
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        
        
        vector<string>res;
        string ip=s;
        string op="";
        rajeev(ip,op,res);
        return res;
        
    }
};