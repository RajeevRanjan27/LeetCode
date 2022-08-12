class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.length();
        string ans="";
        cout<<ans<<"\n";
        for(int i=n-1;i>=0;)
        {
           if(s[i]=='#')
           {   
//               //(s[i-2]*10)+s[i-1];
//                 char temp=(((int)s[i-2]*10)+(int)s[i-1]+96); 
               
               char temp=(s[i-2]-'0')*10+(s[i-1]-'0')+96;
               
               
//   
               ans+=temp;
                  i-=3;
           }
            else
            {
                char tem=(s[i]-'0')+96;
              //  cout<<ans<<"\n";
                ans+=tem;
                 i--;
            }
            
            
        }
     reverse(ans.begin(),ans.end());
        return ans;
        
    }
};