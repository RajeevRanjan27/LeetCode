class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
       for(int i=0;s[i]!='\0';i++)
       {
           while (t[j] && t[j] !=s[i])
           {
               j++;
           }
           if(t[j]=='\0')
              return false;
           j++;
       }
    return true;
           
        
    }
};