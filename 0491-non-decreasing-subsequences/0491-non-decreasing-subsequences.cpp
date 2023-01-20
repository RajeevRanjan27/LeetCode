class Solution {
public:
    
    
    
    
   void  helper(set<vector<int>>&ans,int index,vector<int>&temp,vector<int>nums)
    {
        if(index==nums.size())
        {
        
        if(temp.size()>=2)
        {
            ans.insert(temp);
            
        }
            
            return;
        }
        
        // ans nikalne ka 2 tarika 
        //1.lekar
        
       
        if(temp.size()==0||nums[index]>=temp.back())
        {
            temp.push_back(nums[index]);
            helper(ans,index+1,temp,nums);
            
            temp.pop_back();
        }
        
        
          helper(ans,index+1,temp,nums);
        
        
        
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        
        set<vector<int>>ans;
        
        vector<int>temp;
        
        helper(ans,0,temp,nums);
        vector<vector<int>>res(ans.size());
        copy(ans.begin(),ans.end(),res.begin());
        
        return res;
        
        
        
        
    }
};