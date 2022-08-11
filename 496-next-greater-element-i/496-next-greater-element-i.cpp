class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    int maxv=-1;
                      for(int k=j;k<nums2.size();k++)
                      { 
                          if(nums2[k]>nums1[i])
                          {
                             maxv=nums2[k];
                              break;
                          }
                      }
                 
                    ans.push_back(maxv);
                   
                        
                }
                    
            }
        }
        return ans;
        
    }
};