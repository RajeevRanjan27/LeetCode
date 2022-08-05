class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size() ;
        int count=0;
        for(int i=0,j=0;i<n&&j<n;)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                j++;i++;
                count++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};