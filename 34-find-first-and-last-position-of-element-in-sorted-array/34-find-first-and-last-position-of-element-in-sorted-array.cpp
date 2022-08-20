class Solution {
public:
     
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,res=-1;
        vector<int>ans;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        ans.push_back(res);
        end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        ans.push_back(res);
        return ans;
        
//        // vector<int>ans(2,-1);
//         int idx1=lower_bound(nums,target);
//         int idx2=lower_bound(nums,target+1)-1;
        
//         if(idx1<nums.size() && nums[idx1]==target)
//         {
//           return {idx1,idx2};  
//         }
//         else {
//             return {-1,-1};
//         }
        
      
    }
     // int lower_bound(vector<int>&nums,int target)
     //    {
     //       int i=0,j=nums.size()-1;
     //        while(i<=j){
     //        int mid=(i+j)/2;
     //        if(nums[mid]<target)
     //        {i=mid+1;
     //        }
     //        else {j=mid;}
     //        }
     //        return i;
     //  }
};