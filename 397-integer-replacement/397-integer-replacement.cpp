class Solution {
public:
    int integerReplacement(int n) {
        
        int count=0;
        while(n!=1)
        {
            if(n%2==0){
                count++;
                n=n/2;}
            else{
                if( n==2147483647)
                {  count=32;
                     break;
                }
                if(n==3){
                    n=n-1;
                    count++;}
                else
                {   if((n+1)%4==0)
                    { n=n+1;
                          count++;}
                    else
                     {  n=n-1;
                      count++;}
                }
            }
            
        }
        return count;
        
    }
};