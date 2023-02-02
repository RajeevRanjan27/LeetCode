class Solution {
public:
    
    bool check(string &s1, string s2)
    {
        int a=s1.size();
        int b=s2.size();
        string s3=s2;
        
        int c=a/b;
        while(c--)
        {
            s2+=s3;
        }
        
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
               return false; 
            }
        }
        
        return true;
        
    }
    string gcdOfStrings(string str1, string str2) 
    {
        int m=str1.size();
        int n=str2.size();
        int rem= __gcd(m,n);
        
        string s=str2.substr(0,rem);
        
      if(check(str1,s) && check(str2,s))
      {
          return s;
      }
        
        string ans="";
        return ans;
       
        
        
        
    }
};