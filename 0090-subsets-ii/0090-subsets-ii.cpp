class Solution {
public:
    
    void rajeev(vector<int>nums,vector<int>&op,set<vector<int>>&mp)
    {
        if(nums.size()==0)

        {
            
            if(mp.find(op)==mp.end())
            mp.insert(op);
              return ;
        }
      
        

        vector<int>op1;
         op1=op;
        vector<int>op2;
         op2=op;
       op2.push_back(nums[0]);
        
        nums.erase(nums.begin()+0);
        
        rajeev(nums,op1,mp);
        rajeev(nums,op2,mp);
        
        return ;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>op;
        sort(nums.begin(),nums.end());
        
      set<vector<int>>mp;
        rajeev(nums,op,mp);
        
        for(auto x:mp)
        {
            res.push_back(x);
        }
        return res;
        
        
    }
};