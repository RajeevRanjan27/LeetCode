class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count_even=0;
        int no_of_digit=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i])
            {
                no_of_digit++;
                nums[i]/=10;
            }
            if(no_of_digit%2==0)
            {
                count_even++;
            }
            no_of_digit=0;
            
        }
        return count_even;
        
    }
};