class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        for(int i=0; i<arr.size();i++){
            if(ans.size()==arr.size()){
                break;
            }
            if(arr[i]==0){
                ans.push_back(0);
                ans.push_back(0);
                
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        
        
//         vector<int>v(arr.size(),0);
//         int flag=0;
        
//        /* for(auto x:arr)
//         {
//             if(x)
//                 flag=1;
//                 break;
//         }
//         */
//        // if(flag)
//         {
//             int j=0,i=0;
//             while(j<arr.size()&&i<arr.size())
//         {
//             if(arr[i]==0)
//             {
//                 v[j++]=arr[i];
//                 v[j++]=arr[i++];
                
//             }
//            else
//                 {
//                 v[j++]=arr[i++];
//             }
//         }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=ans[i];
        }
            
        // }
       
        
    }
};