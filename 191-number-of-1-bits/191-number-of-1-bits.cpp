class Solution {
public:
    int hammingWeight(uint32_t n) {
       
        
        // bitset<32>s(n);
        // int count=0;
        // for(int i=0;i<32;i++)
        // {
        //     if(s[i]==1)
        //         count++;
        // }
        
        
        
//         bitset<32>ans(n);
//         return ans.count();
        
        
        
//         cout << n << endl;
//         int count=0;
//         while(n>0)
//         {
//             cout << n << endl;
//             count+=n%10;
//             n/=10;
           
//         }
       // return count;
        int count=0;
        while(n!=0)
        {
            n&=n-1;
            count++;
        }
        return count;
        
        
    }
};