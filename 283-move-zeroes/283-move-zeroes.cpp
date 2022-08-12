class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int counter=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                counter++;
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<(nums.size()-counter);i++)
        {
            ans.push_back(0);
        }
        nums=ans;
        
    }
};