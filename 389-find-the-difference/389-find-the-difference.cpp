class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>freq(26,0);
        char ans;
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
         freq[t[i]-'a']--;
         if(freq[t[i]-'a']<0)
         {
           ans=(char)t[i];
            break;
         }
         
        }
        return ans;
        
        
      
    }
};