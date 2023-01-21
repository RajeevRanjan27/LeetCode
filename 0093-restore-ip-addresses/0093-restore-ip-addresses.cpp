class Solution {
public:
    
    
    bool isvalid(string s1)
    {
        if(s1.size()>3||s1.size()==0)return false;
        if(s1.size()>1&&s1[0]=='0')return false;
        
        if(s1.size()&&stoi(s1)>255)return false;
        return true;
        
    }
    
    
   void helper(int i,int dots,string temp,vector<string>&ans,string s)
    {
         
        
        if(dots==3)
        {
            if(isvalid(s.substr(i)))
            {
                ans.push_back(temp+s.substr(i));
                
            }
            return;
        }
        
        for(int j=i;j<s.size();j++)
        {
            if(isvalid(s.substr(i,j-i+1)))
            {
                temp.push_back(s[j]);
                temp.push_back('.');
                
                helper(j+1,dots+1,temp,ans,s);
                
                
                temp.pop_back();
                
                
            }
        }
        return;
    }
    vector<string> restoreIpAddresses(string s) {
        
        
        
        vector<string>ans;
        
        if(s.size()<4)return ans;
        
        helper(0,0,"",ans,s);
        return ans;
        
        
    }
};