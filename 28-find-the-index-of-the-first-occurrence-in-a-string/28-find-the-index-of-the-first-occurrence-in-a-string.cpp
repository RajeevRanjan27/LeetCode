class Solution {
public:
    int strStr(string haystack, string needle) {
//        int m=haystack.length(),n=needle.length();
//         for(int i=0;i<=m-n;i++)
//         {
//             int j=0;
            
//                 for(;j<n;j++)
//                 {
//                    if(haystack[i+j]!=needle[j])
//                    {
//                        break;
//                    }
//                 }
//             if(j==n)return i;
            
//         }
//         return -1;
       
        
        int n=needle.length(),m=haystack.length();
        
        if(n>m)return -1;
        
        
        string str="";
        int j=0,i=0;
        
        for( j=0;j<n;j++)

        {
            str+=haystack[j];
            
        }
        cout << str << endl;
        
       if(str==needle)return i;
        for(j=n;j<m;j++)

        {
            
            
            str=str.substr(1);
            cout << str << endl;
            i++;
            str+=haystack[j];
            if(str==needle) return i;
            
            
                
            
                
        }
        return -1;
            
        
    }
};