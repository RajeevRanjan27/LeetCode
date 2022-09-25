// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
//      long long numbercheck(long long low,long long high)
//     {
//          long long ans=0;
//         long long mid=low+((high-low)/2);
//         if(low>high) return -1;
//         if(isBadVersion(mid))
//         {   ans=mid;
//             //(isBadVersion(numbercheck(low,mid-1)))
//            numbercheck(low,mid-1);
//         }
//       //  else return numbercheck(low,mid-1);
//         else 
//         {
//             numbercheck(low,mid-1);
//         }
//          return ans;
//     }
    
    
    int firstBadVersion(int n) {
        
        
     int low=1,high=n,fbv=1;
        while(low<high)
        {
            int mid=low+((high-low)/2);
            if(!isBadVersion(mid)){low=mid+1;}
            else{
                high=mid;
            }
        }
        return low ;
    }
};