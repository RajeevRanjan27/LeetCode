/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    
    long long numbercheck(long long low,long long high)
    {
        long long mid=low+((high-low)/2);
        if(low>high) return -1;
        if(guess(mid)==0)return mid;
        else if (guess(mid)==-1) return numbercheck(low,mid-1);
        else return numbercheck(mid+1,high);
    }
    long long guessNumber(int n) {
//        int high=n,low=1,x=0;
        
//      while(high>=low)   {
//        x=low+((high-low)/2);
//         int res=guess(x);
        
//         if(res==0)
//         {
//             cout<<x;
            
//             break;
//         }
//         else if(res==-1)
//         {
//           //  cout<<low;
//             high=x-1;
//         }
//         else{
//             //cout<<high<<endl;
//             low=x+1;
//         }
//      }
//         return x;
        
//     }
        
       
        return numbercheck(0,n);
    }
        
};