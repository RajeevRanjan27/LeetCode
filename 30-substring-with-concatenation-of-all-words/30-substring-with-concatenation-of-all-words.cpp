class Solution {
public:
    
    
    
    bool check(string str,unordered_map<string,int>mp,int wordlen)
    {
        for(int j=0;j<str.length();j+=wordlen)
        {
            string temp=str.substr(j,wordlen);
            if(mp.find(temp)!=mp.end())
            {
                if(--mp[temp]==-1)return false;
                
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        
        
        unordered_map<string,int>mp;
        for(auto s:words)
        {
            mp[s]++;
        }
        
        
        int slen=s.length();
        int i=0;
        int wordlen=words[0].length();
        int strlen=wordlen*words.size();
        
        vector<int>ans;
    
        
        while(i+strlen<=slen)
        {
            if(check(s.substr(i,strlen),mp,wordlen))
            {
                ans.push_back(i);
            }
            i++;
        }
        return ans;
        
    }
};