class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int res=0;
        
        for(int i=0,j=0;i<g.size()&& j<s.size();)
        {
            if(g[i]<=s[j]){
                i++;
            
                res++;
                
            }
            
            
                j++;
                
        }
//         int i=0;
//         int j=0;
//         while(i<s.size()&&j<g.size()){

//             if(g[j]<=s[i]){
//                 res++;
                
//                 j++;
//             }
//             i++;
//         }
        return res;
        
    }
};