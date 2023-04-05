class Solution {
public:
    
    
    static bool com(pair<int,int>p1, pair<int,int>p2)
    {
        
        int a=p1.first-p1.second;
        int b=p2.first-p2.second;
        
        if(a>b)
        {
            return true;
        }
        else{
            return false;
        }        
        
    }
    
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        
        int res=0;
        
        vector<pair<int,int>>v;
        for(int i=0;i<reward1.size();i++)
        {
            v.push_back({reward1[i],reward2[i]});
        }
        
        sort(v.begin(),v.end(),com);
        
        
        for(int i=0;i<v.size();i++)
        {
            if(i<k){ res+=v[i].first;}
            else{
                res+=v[i].second;
            }
           
        }
        return res;
        
    }
};