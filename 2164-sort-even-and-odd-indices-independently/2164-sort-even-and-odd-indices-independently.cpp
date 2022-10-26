class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
     int n=nums.size();
    vector<int>odd,even;
    vector<int>res;
    for(int i=0;i<nums.size();i++)
    {
        if(i%2)
        { 
            odd.push_back(nums[i]);
        }
        else
        {even.push_back(nums[i]);}
        
    }
        
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        
//         int o=odd.size();
//         int e=even.size();
        
        for(int i=0,j=0;i<nums.size();i++)
        {
            if(i%2==0)
           { nums[i]=even[j++];}
            
        }
       for(int i=1,j=0;i<nums.size();i++)
       {
           if(i%2)
           {nums[i]=odd[j++];}
       }
        
      
        
//         for(int i=0,j=0,k=0;i<nums.size();i++)
//         {
//             if(i%2==0)
//             {
//                 res.push_back(even[j++]);
                
//             }
//             else{
//                 res.push_back(odd[k++]);
//             }
//         }
//         return res;
        return nums;
        
    }
};