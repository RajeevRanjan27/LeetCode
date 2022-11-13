class Solution {
public:
    string reverseWords(string s) {
        int n =s.size();
        string temp ="";
        string res="";
        vector<string> ans;
        int i=0;
        while(i<n){
            if(s[i]==' '){
                ans.push_back(temp);
                temp="";
                while(s[i]==' '){
                    i++;
                }
                i--;
            }
            else
            {
                temp.push_back(s[i]);
            }
            i++;
        }
        ans.push_back(temp);

        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]=="") continue;
            res+= ans[i];
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};