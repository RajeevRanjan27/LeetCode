class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int>ans(2);
        
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     ans[0]=i;
//                     ans[1]=j;
//                     break;
//                 }
//             }
           
//         }
//         return ans;
     unordered_map<int,int>hash;
       
       for(int i=0;i<nums.size();i++)
       {
           if(hash.find(target-nums[i])!=hash.end())
           {
               return {hash[target-nums[i]],i};
           }
           hash[nums[i]]=i;
       }
        return {};
        
    }
};