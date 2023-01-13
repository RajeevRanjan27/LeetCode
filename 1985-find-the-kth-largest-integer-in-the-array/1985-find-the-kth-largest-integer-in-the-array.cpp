
// class Solution {
// public:
    
//     string kthLargestNumber(vector<string>& nums, int k) {
//         priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>minh;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             minh.push({nums[i].size(),nums[i]});
//             if(minh.size()>k) minh.pop();
    
//         }
//         return minh.top().second;
        
//     }
// };



class Solution {
public:
    
    struct comparator{
        bool operator()(string &s1,string &s2){
            if(s1.size()>s2.size())
            {
                return true;
                
            }
            else if(s1.size()<s2.size())
            {
                return false;
            }
            else{
                for(int i=0;i<s1.size();i++)
                {
                    if(s1[i]-'0'>s2[i]-'0')
                       {
                        return true;
                    }
                    else if(s1[i]-'0'<s2[i]-'0')
                      {  
                        return false;
                      }
                }
                return false;
            }
            
            
        }
        
    };
    
//     struct comparator {
//         bool operator()(string &s1,string &s2) {
//             // if length of first string is greater that means first string denotes greater number hence it should come next to lesser string. Hence swapping should be done
//             if(s1.length()>s2.length()) {
//                 return true;
//             }
            
//             // if length of first string is lesser that means first string denotes smaller number hence ordering is fine. No need to swap. 
//             else if(s1.length()<s2.length()) {
//                 return false;
//             }
            
//             // if lengths are equal then we have to iterate them
//             else {
//                 for(int i=0;i<s1.length();i++) {
//                     // if at a particular index digits vary then decide which one is greater or lesser and return 
//                     if(s1[i]-'0'>s2[i]-'0') {
//                         return true;
//                     }
//                     else if(s1[i]-'0'<s2[i]-'0') {
//                         return false;
//                     }
//                 }
//                 return false;
//             }
//         }
//     };
      
    string kthLargestNumber(vector<string>& nums, int k) {
        
        priority_queue<string,vector<string>,comparator>minh;
        
        for(int i=0;i<nums.size();i++)
        {
            minh.push(nums[i]);
            if(minh.size()>k)
            {
                minh.pop();
                
            }
        }
        return minh.top();
        
        
           
    }
};

