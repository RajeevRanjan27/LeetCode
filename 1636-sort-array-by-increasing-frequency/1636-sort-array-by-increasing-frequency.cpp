class Solution {
public:
    
   class compare_fun
    {    
        public:
        // Since as you can see we have to sort decreasing order if frequency of two elements
        // is same, so we need *Custom Comparator Function* which is this \U0001f447
        bool operator()(pair<int, int> p1, pair<int, int> p2) 
        {    
            if(p1.first==p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare_fun>pq;
        
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
            
        }
        
        while(pq.size()>0)
        {
            int fre=pq.top().first;
            int ele=pq.top().second;
            pq.pop();
            
            for(int i=0;i<fre;i++)
            {
                res.push_back(ele);
            }
        }
        return res;
        
    }
};