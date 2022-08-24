class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>res;
        for(int i=0;i<l.size();i++)
        {
            vector<int>temp(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(temp.begin(),temp.end());
            
            cout << temp.size() << endl;
            int diff=temp[1]-temp[0];
            bool a = true;
            for(int j=0;j<(r[i]-l[i]);j++)
            {
                if(diff!=temp[j+1]-temp[j])
                {
                    a = false;
                    // goto here;
                }
            }
            // here:
            res.push_back(a);
            
            
          
        }
        return res;
        
        
    }
};