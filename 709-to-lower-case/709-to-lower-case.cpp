class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-0)<=90 && (s[i]-0)>=65)
            {
                s[i]=(char)s[i]+32;
            }
        }
        return s;
        
    }
};