class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int tail=s.size()-1,len=0;
        while(tail>=0 && s[tail]==' ')tail--;
       while(tail>=0 && s[tail]!=' ')
       {
           len++;
           tail--;
       }
        return len;
        
    }
};