class Solution {
public:
    bool isPalindrome(int x) {
        
   long int y=0;
   long int z=x;
    if(z<0)
    {
        return false;
        
    }
  else{
     while(x)   
     { 
       
        y=y*10 + (x%10);
        x/=10;
     }
     if(z==y)
        {
            return true;
        }
        else{
            return false;
        }
        
        
    }
    }
};