class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if(s.length()!=t.length())
            return false;
        
        
        int counts[26]={};
        for(int i=0;i<s.length();i++)
        {
            counts[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            counts[t[i]-'a']--;
        }
        for(auto x:counts)
        { if(x)
            return false;
        }
        return true;
        
    }
};