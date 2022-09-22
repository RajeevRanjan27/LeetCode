class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(i == s.length()-1)
            {
                temp += s[i];
                reverse(temp.begin(), temp.end());
                ans += temp;
            }
            else if(s[i] == ' ')
            {
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans += " ";
                temp = "";
            }
            else
                temp += s[i];
        }
        return ans;
    }
};