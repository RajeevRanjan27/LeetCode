class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int mn=salary[0];
        int mx=salary[0];
        for(int i=0;i<salary.size();i++)
        {
            mn=min(mn,salary[i]);
            mx=max(mx,salary[i]);
            
            sum+=salary[i];
        }
        
        sum=sum-mx-mn;
        int n=salary.size()-2;
        return (double)(sum/n);
    }
};