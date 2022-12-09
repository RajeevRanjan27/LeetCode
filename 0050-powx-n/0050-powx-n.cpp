class Solution {
public:
    double myPow(double x, int n) {
  double z=1;
        if(n==0)return z;
        
       if(n<0)
       {
           n=abs(n);
           x=1/x;
       }
      
        if(n%2)return  x*myPow(x*x,n/2);
        return myPow(x*x,n/2);
        
        
        
        
        
       
        

        
    }
};