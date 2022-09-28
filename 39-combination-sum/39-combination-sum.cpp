class Solution {
public:
    
    vector<vector<int>> helper(vector<int> & can,int target,int idx)
    {
        
        if(target<0)
        {
            // vector<vector<int>>temp;
            return {};
        }
        if(target==0)
        {
            vector<vector<int>>ans;
            
            vector<int>temp;
           ans.push_back(temp);
            return ans;
            
        }
        if(idx==can.size())
        {
            return {};
        }
        
        vector<vector<int>>l1,l2,res;
        l1=helper(can,target-can[idx],idx);
        l2=helper(can,target,idx+1);
        
        for(auto x:l1)
        {
            x.push_back(can[idx]);
            res.push_back(x);
        }
        for(auto y: l2)
        {
            res.push_back(y);
            
        }
        
        
        return res;
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
       ans= helper(candidates,target,0);
        return ans;
        
    }
};