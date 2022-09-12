class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
//         vector<array<char,2>>mis;
//         for(int i=0;i<s1.length()&&mis.size()<3;i++)
//         {
//             if(s1[i]!=s2[i])
//             {
//                 mis.push_back({mis.empty()?s1[i]:s2[i],mis.empty()?s2[i]:s1[i]});
                
//             }
//         }
//         return mis.empty()||(mis.size()==2&&mis[0]==mis[1]);
        
         
            
//         int diff=0,flag=1,mismatch=0;
//         vector<int>vec(26);
//         int n=s1.length();
        
//         for(int i=0;i<n;i++)
//         {
//             vec[s1[i]-'a']++;
//             vec[s2[i]-'a']--;
//         }
//         for(auto freqarr:vec)
//             {
//                 if(freqarr)
//                 {
//                     flag=0;
//                     break;
//                 }
//             }
//         if(!flag)
//         {
//             return false;
            
//         }
        
        
//         for(int i=0;i<n;i++)
//         {
//             if(s1[i]!=s2[i])
//             {
//                 mismatch++;
//             }
//         }
//         return mismatch<=2;
        
        
        int cnt=0,idx1=0,idx2=0;
        int n=s1.size();
    
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                (cnt++ ? idx2:idx1)=i;
                
            }
        }
        return cnt==0 || (cnt==2 && s1[idx1]==s2[idx2]&& s2[idx1]==s1[idx2]);
        
        
        
    }
};