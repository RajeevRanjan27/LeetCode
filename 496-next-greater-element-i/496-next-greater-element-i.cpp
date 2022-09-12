class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
//         int n=nums1.size();
        
//         vector<int>ans;
//         for(int i=0;i<nums1.size();i++)
//         {
//             for(int j=0;j<nums2.size();j++)
//             {
//                 if(nums1[i]==nums2[j])
//                 {
//                     int maxv=-1;
//                       for(int k=j;k<nums2.size();k++)
//                       { 
//                           if(nums2[k]>nums1[i])
//                           {
//                              maxv=nums2[k];
//                               break;
//                           }
//                       }
                 
//                     ans.push_back(maxv);
                   
                        
//                 }
                    
//             }
//         }
//         return ans;
        
    stack<int>s;
        vector<int>ans;
        
        unordered_map<int,int>m;
        for(auto n:nums2)
        {
            while(s.size()&&s.top()<n)
            {
                m[s.top()]=n;
                s.pop();
                
            }
            s.push(n);
        }
        for(auto n:nums1)
        {
            ans.push_back(m.count(n)?m[n]:-1);
        }
        return ans;
    }
};