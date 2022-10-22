class Solution {
public:
    int singleNumber(vector<int>& nums) {

//         int ans=0;
//         for(auto x:nums)
//         {
//             ans=ans^x;
//         }
//         return ans;
        
        int n =0;
        for(auto x:nums)
        {
            n=n^x;
            
        }
        return n;
    }
};