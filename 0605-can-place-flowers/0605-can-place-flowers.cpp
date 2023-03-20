class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count=0;
        int i=0;
        int s=flowerbed.size();
        
        
        if(s==1)
        {
            if(flowerbed[0]==0 && n<=1)return true;
            
            if(flowerbed[0]==1 && n==0)return true;
            return false;
            
        }
        
        while(i<s){
            if(i-1<0)
            {
                if(flowerbed[i]==0 && flowerbed[i+1]==0)
                {
                   flowerbed[i]=1;
                    count++;
                    
                }
            }
            
           else if(i+1>s-1){
                
                if(flowerbed[i-1]==0 && flowerbed[i]==0)
                {
                        count++;
                       flowerbed[i]=1;
                }
                
            }
            
            else{
               if (flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)
               {
                   flowerbed[i]=1;
                   count++;
                   
               }
                
            }
            
            i++;
            
        }
        
        return count>=n;
    }
};