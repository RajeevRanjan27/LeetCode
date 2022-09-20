class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
//         unordered_map<string,int>mp;
//         for(auto x:ideas)
//         {
//             mp[x]=1;
//         }
//         long long ans=0;
//         for(int i=0;i<ideas.size();i++)
//         {
//             string temp1=ideas[i];
            
//             for(int j=i+1;j<ideas.size();j++)
//             {
//                 string temp2=ideas[j];
//                 string s1=temp1[0]+temp2.substr(1);
//                 string s2=temp2[0]+temp1.substr(1);
                
//                 if(mp.find(s1)==mp.end() && mp.find(s2)==mp.end())
//                 {
//                     ans+=2;
//                 }
                
//             }
//         }
//         return ans;
        
        unordered_map<char,unordered_set<string>>mp;
        for(auto x:ideas)
        {
            mp[x[0]].insert(x.substr(1,x.size()-1));
        }
        
        long long ans=0;
        for(int i=0;i<26;i++)
        {
            for(int j=i+1;j<26;j++)
            {
                unordered_set<string> s1=mp[i+'a'],s2=mp[j+'a'];
                int comm=0;
                for(auto u:s1)
                    if(s2.find(u)!=s2.end())comm++;
                
                ans+=(s1.size()-comm)*(s2.size()-comm)*2;
                
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     long long distinctNames(vector<string>& ideas) {
//         unordered_map <char,unordered_set<string>> mp;
//         for(auto u : ideas) mp[u[0]].insert(u.substr(1,u.size()-1));
        
//         long long ans = 0;
        
//         for(int i = 0; i<26; i++){
//             for(int j = i+1; j<26; j++){
//                 unordered_set <string> s1 = mp[i+'a'], s2 = mp[j+'a'];
                
//                 int comm = 0;
//                 for(auto u : s1)
//                     if(s2.find(u)!=s2.end()) comm++;
                
//                 ans += (long long)(s1.size()-comm)*(long long)(s2.size()-comm)*2;
//             }
//         }
//         return ans;
//     }
// };