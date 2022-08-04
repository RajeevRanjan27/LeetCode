class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>v(m+n,0);
        int i=0,j=0,k=0;
        while(i<m&&j<n)
        {
            if(nums1[i]>=nums2[j])
            {
                v[k]=nums2[j];
                k++;
                j++;
                
            }
            else {
                v[k]=nums1[i];
                k++;i++;
            }
        }
       while(i<m)
        {
            v[k++]=nums1[i++];
        }
        while(j<n)
        {
            v[k++]=nums2[j++];
        }
        for(int p=0;p<(m+n);p++)
        {
            nums1[p]=v[p];
        }
      
       // sort(nums1.begin(),nums1.end());
        
    }
};