class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        
     k=k%nums.size();
        
        reverse(nums.begin(),nums.end());
//         for(auto it: nums)
//         {
//             cout<<it<<" ";
//         }
//         cout<<endl;
        
        reverse(nums.begin(),nums.begin()+k);
        //  for(auto it: nums)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        
        reverse(nums.begin()+k,nums.end());
        //  for(auto it: nums)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        
        
        
    }
};