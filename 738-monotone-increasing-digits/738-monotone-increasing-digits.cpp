class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        
        
        string str = to_string(n);
        int sz=str.size();
        int marker=str.size();
        for(int i=sz-1;i>0;i--)
        {
            if(str[i-1]>str[i]){
                   marker=i;
                    str[i-1]-=1;
               }
               
        }
        for(int i=marker;i<sz;i++) str[i]='9';
        
        return stoi(str);
        
        
    }
};

// class Solution {
// public:
//     int monotoneIncreasingDigits(int n) {
//         string s = to_string(n);
//         int size = s.size(), lim = s.size();
//         for(int i=size-1; i>0; i--){
//             if(s[i-1] > s[i]) lim = i, s[i-1] -= 1;
//         }
//         for(int i=lim; i<size; i++) s[i] = '9';
//         return stoi(s);
//     }
// };