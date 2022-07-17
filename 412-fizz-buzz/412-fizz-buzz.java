class Solution {
    public List<String> fizzBuzz(int n) {
    
        
        List<String>l1=new ArrayList<>(n);
        
        
        
        for(int i=1;i<=n;i++)
        {
            
           boolean divby3=(i%3==0); 
            boolean divby5=(i%5==0);
            
            String currstr="";
            
            if(divby3)
            {
                currstr+="Fizz";
            }
            if(divby5)
            {
                currstr+="Buzz";
            }
            if(currstr.isEmpty())
            {
                currstr =String.valueOf(i);
            }
            
            l1.add(currstr);
            
        }
        return l1;
        
        
        
    }
}