class Solution {
public:
    char findTheDifference(string s, string t) {
//         vector<int>freq(26,0);
//         char ans;
//         for(int i=0;i<s.length();i++)
//         {
//             freq[s[i]-'a']++;
//         }
//         for(int i=0;i<t.length();i++)
//         {
//          freq[t[i]-'a']--;
//          if(freq[t[i]-'a']<0)
//          {
//            // ans=(char)t[i];
//              ans=t[i];
//              break;
//              // return ans;
//          }
         
//         }
//          return ans;
        
        
        
        
        // int x=0;
        // for(int i=0;i<t.length();i++)
        // {
        //     x+=t[i];
        // }
        // for(int j=0;j<s.length();j++)
        // {
        //     x-=s[j];
        // }
        // return (char)x;
        
        char c=0;
        for(char cs:s)c^=cs;
        for(char ct:t)c^=ct;
        return c;
        
        
        
      
    }
};