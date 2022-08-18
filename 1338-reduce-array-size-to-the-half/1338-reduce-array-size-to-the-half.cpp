class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
     //   vector<int>freq(100000,0);
//         for(int i=0;i<arr.size();i++)
//         {
//             freq[arr[i]]++;
//         }
        unordered_map<int,int>mp;
         int mx=0;
       
        
       for(int i=0;i<arr.size();i++)mp[arr[i]]++;
       for(auto x:mp)mx=max(x.second,mx);
       vector<int>freq(mx+1,0);
        for(auto x : mp)
        {
            freq[x.second]++;
        }
        for(auto y: freq)
        {
            cout<<y<<" ";
        }      
        
        int rem=arr.size()/2;
        int i=freq.size()-1;
        int ans=0;
        while(rem>0)
        {
            if(freq[i]*i>=rem)
            {
                ans+=(rem%i)?((rem/i)+1):(rem/i);
                rem=0;
                
            }
            else {
                ans+=freq[i];
               
                rem-=freq[i]*i;
                 i--;
            }
            
        }
            
    return ans;  
        
      
        
        
    }
};