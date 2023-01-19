class Solution {
public:
    int partitionString(string s) {
        int ans=0;
        unordered_map<char,int>mp;
        int i=0,j=0;
        while(j<s.size())
        {
            mp[s[j]]++;
            
            if(mp.size()==j-i)
            {
                ans++;
                mp.clear();
                mp[s[j]]++;
                i=j;
                j++;
                
            }
            else{
                j++;
            }
            
            
        }
        return ans+1;
        
        
    }
};