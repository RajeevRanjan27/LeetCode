class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int x1=0,x2=0,mask=0;
        
        for(auto x:nums)
        {
            x2^=x1&x;
            x1^=x;
         mask=~(x1&x2);
            x2&=mask;
            x1&=mask;
            
            
        }
        return x1|x2;
        
        
    }
};