class Solution {
public:
    bool isHappy(int n) {
        
        int sum=0;
        
        while(sum!=1 || sum!=89){
       while(n)
       {
       //    cout<<sum<<endl;
            sum+=(n%10)*(n%10);
            n/=10;
       }
        if(sum==1)
            return true;
            
        if(sum==89)
            return false;
        n=sum;
        sum=0;
        }
            
       
        
        
    }
};