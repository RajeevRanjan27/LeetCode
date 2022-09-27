class Solution {
public:
    void sortColors(vector<int>& nums) {
        
     int low=0,mid=0,temp=0,high=nums.size()-1;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                mid++;low++;
            }
           
            else if(nums[mid]==1)
            {
                mid++;
            }
             else if(nums[mid]==2)
            {
                temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
              //  mid++;
                high--;
            }
        }
        
        
        
    }
};