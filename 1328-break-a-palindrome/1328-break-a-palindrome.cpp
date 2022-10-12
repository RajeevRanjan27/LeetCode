class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        if(palindrome.length()==1)
        {
            return "";
        }
        string s=palindrome;
        int n=palindrome.length();
        int flag=0;

        for(int i=0;i<n/2;i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                flag=1;
                break;
                
            }
            
            
        }
        if(flag==0)
        {
            s[n-1]='b';
            
        }
        return s;
        
    }
};