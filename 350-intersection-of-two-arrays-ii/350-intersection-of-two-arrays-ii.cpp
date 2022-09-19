class Solution {
    // Two pointer ( i , j ) with sort
public:
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    
    {
        unordered_map<int,int>mp;
        vector<int>ans;
      for(auto x:nums1)mp[x]++;
        
       for(auto y:nums2)
       {
           if(mp[y]>0)
           {ans.push_back(y);}
           mp[y]--;
            
               
       }  
        return ans;
    }
};