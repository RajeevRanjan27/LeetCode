class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       unordered_map<string,vector<string>>mp;
        for(auto t: strs)
        {
            string temp=t;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(t);
            
        }
        
        vector<vector<string>>ans;
        
        for(auto p:mp)
        {
            ans.push_back(p.second);
        }
        return ans;
        
    }
};