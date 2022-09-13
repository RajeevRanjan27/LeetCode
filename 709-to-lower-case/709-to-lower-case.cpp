class Solution {
public:
    string toLowerCase(string s) {
        
       for(auto &ch: s)
       {
           if((ch-0)>=65 and (ch-0)<=90) ch=ch+32;
              
       }
        return s;
    }
};