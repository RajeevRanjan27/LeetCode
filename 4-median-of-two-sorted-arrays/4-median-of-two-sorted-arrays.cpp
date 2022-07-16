class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
       
        
        int n=nums1.size(),m=nums2.size();
         vector<int>fin(m+n);
        int k=0,i=0,j=0;
        double ans=0;
        while(i<n && j<m)
        {
            if(nums1[i]>nums2[j])
            {     fin[k]=nums2[j];
                    j++,k++;
            }
            else   
            {
                     fin[k]=nums1[i];
                       k++,i++;
            }
        }
        for(;i<n;i++)
        {
            fin[k]=nums1[i];
            k++;
        }
        for(;j<m;j++)
        {
            fin[k]=nums2[j];
            k++;
        }
       
        
        return ((m+n)%2==0)?(double)(fin[(m+n)/2]+fin[((m+n)/2)-1])/2:fin[(m+n)/2];
        
        
    }
};