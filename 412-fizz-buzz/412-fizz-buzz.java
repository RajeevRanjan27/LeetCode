class Solution {
    public List<String> fizzBuzz(int n) {
    
        
        List<String>l1=new ArrayList<>(n);
        
        
        
        for(int i=1;i<=n;i++)
        {
            
           boolean divby3=(i%3==0); 
            boolean divby5=(i%5==0);
            
            
            if(divby3 && divby5)
            {
                l1.add("FizzBuzz");
            }
            else if(divby3)
            {
                l1.add("Fizz");
            }
            else if(divby5)
            {
                l1.add("Buzz");
            }
            else 
            {
                l1.add(String.valueOf(i));
            }
            
        }
        return l1;
        
        
        
    }
}