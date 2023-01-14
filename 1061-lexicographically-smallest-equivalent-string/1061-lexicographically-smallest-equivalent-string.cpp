class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        vector<char>v(26);
        string str="";
        for(int i=0;i<26;i++)
        {
            v[i]='a'+i;
            
        }
        
        
        for(int i=0;i<s1.size();i++)
        {
            
            char replace=max(v[s1[i]-'a'],v[s2[i]-'a']);
            char replacewith=min(v[s1[i]-'a'],v[s2[i]-'a']);
             for(int i=0;i<26;i++)
             {
                 if(v[i]==replace)
                     {v[i]=replacewith;}
             }
            
            
            
            
            
        }
        
        for(int i=0;i<baseStr.size();i++)
        {
            str+=v[baseStr[i]-'a'];
        }
        return str;
        
        
    }
};