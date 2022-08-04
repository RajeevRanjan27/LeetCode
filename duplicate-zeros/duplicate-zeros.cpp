class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
//         vector<int>ans;
//         for(int i=0; i<arr.size();i++){
//             if(arr.size()==ans.size())
//                 break;
//             if(arr[i]==0)
//             {
//                 ans[i]=0;
//                 ans[i+1]=0;
                
//             }
//             else{
//                 ans.push_back(arr[i]);
//             }
           
//         }
        
        
      vector<int>v;
    
        
           
            for(int i=0;i<arr.size();i++)
            {
            if(arr[i]==0)
            {
               v.push_back(0);
                v.push_back(0);
                
            }
           else
                {
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=v[i];
        }
            
        // }
       
        
    }
};