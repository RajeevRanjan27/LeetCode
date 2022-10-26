class Solution {
public:
    int myAtoi(string s) {
        
 int n=s.length();
          
        long long int res=0,i=0,sign=1;
        
        
        while(s[i]==' ' && i<n)
            i++;
        
       if(s[i]=='-')
           sign=-1,i++;
        
        else if(s[i]=='+')
            i++;
        
        
        while(s[i]>='0' && s[i]<='9')
            
         {   
            
//             if(INT_MAX/10<res ||INT_MIN<res-(s[i]-'0'))
//             {
//                 return sign==1?INT_MAX:INT_MIN;
                
//             }
            
            
            res=1ll*(res*10)+(s[i]-'0');
            
            if(res>INT_MAX)
                return sign==1? INT_MAX:INT_MIN;
            
           
            i++;
            
        
        }
        
        
    res=res*sign;
        
        if(res>=INT_MAX)
            return INT_MAX;
        
        else if(res<=INT_MIN)
            return INT_MIN;
        
        return res;
        
    }
};