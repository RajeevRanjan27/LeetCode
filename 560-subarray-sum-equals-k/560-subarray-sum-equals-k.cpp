class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
   
        
        
        vector<int>prefix(nums.size());
        unordered_map<int,int>mp;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        int ans=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            
           // if(prefix[i]==k)ans++;
            if(mp.find(prefix[i]-k)!=mp.end())
            {
                ans+=mp[prefix[i]-k];
               // mp[prefix[i]-k]--;
                
            }
            mp[prefix[i]]++;
            
        }
        return ans;
        
//      //   int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         int sum=0,ans=0;
//         mp[sum] = 1;
//         for(auto it:nums){
//             sum += it;
//             int find = sum - k;
//             if(mp.find(find) != mp.end()){
//                 ans += mp[find];
//             }
//             mp[sum]++;
//         }
//         return ans;
        
        
    }
};