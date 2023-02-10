class Solution {
public:
    
    
    vector<vector<int>>res;
    
    
    void rajeev(vector<int>nums,vector<int>op)
    {
        
        if(nums.size()==0)
        {
            res.push_back(op);
            return;
            
        }
        
        vector<int>op1;
        op1=op;
        vector<int>op2;
        op2=op;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        rajeev(nums,op1);
        rajeev(nums,op2);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) 
        
    {
        vector<int>op;
        rajeev(nums,op);
        return res;
        
    }
};