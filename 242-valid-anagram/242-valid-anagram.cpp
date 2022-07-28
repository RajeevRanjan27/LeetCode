class Solution {
public:
    bool isAnagram(string s, string t) {
       
        
        if(s.length()!=t.length())
        {
            return false;
        }
        else {
        vector<int>freq(26,0);
            for(int i=0;s[i]!=NULL;i++)
            {
                freq[s[i]-'a']++;
            } 
            for(int i=0;t[i]!=NULL;i++)
            {
                freq[t[i]-'a']--;
            }
            
            for(auto x:freq)
            {
                if(x)
                    return false;
            }
            return true;
        }
       
        
    }
};