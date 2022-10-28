class Solution {
public:
    int minMaxGame(vector<int>& nums) { 
        int n=nums.size();
       if(n==1)return nums[0];
        int i=0;
        bool flag=false;
        vector<int>temp;
        while(i<n)
        {
            if(!flag)
            {
                temp.push_back(min(nums[i],nums[i+1]));
                
            }
            else{
                temp.push_back(max(nums[i],nums[i+1]));
            }
            
        flag=!flag;
            i=i+2;
            if(i==n)
            {
                nums=temp;
                temp.clear();
                n=n/2;
                i=0;
                
                if(n==1)return nums[0];
            }
        }
        return -1;
    }
};