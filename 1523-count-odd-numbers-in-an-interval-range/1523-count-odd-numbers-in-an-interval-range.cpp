class Solution {
public:
    int countOdds(int low, int high) {
     /*   int count=0;
            while(high>=low)
            {
                if(low%2)
                    count++;
                low++;
            }
        return count;
        */
        return ((high-low)/2)+(low%2 ||high%2);
        
    }
};