class Solution {
public:
    
    long long sum(string s,char c)
    {
        long long cnt=0;
        long long res=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                res+=cnt*(cnt+1)/2;
                cnt=0;
            }
            else{
                cnt++;
                
            }
            
        }
        
        return res+(cnt*(cnt+1)/2);
    }
    long long appealSum(string s) {
        
        long long n=s.length();
        
       long long ans=n*(n+1)*13;
        cout<<ans;
        
        for(char i='a';i<='z';i++)
        {
            long long temp=sum(s,i);
            ans-=temp;
        }
        return ans;
        
        
    }
};