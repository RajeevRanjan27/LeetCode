//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void rajeev(string S,string &op,vector<string>&res)
    {
        if(S.size()==0)
        {
            res.push_back(op);
            return;
            
        }
        
        string s1=op;
        s1.push_back(S[0]);
        
        string s2=op;
        s2.push_back(' ');
        s2.push_back(S[0]);
        S.erase(S.begin()+0);
        rajeev(S,s2,res);
        rajeev(S,s1,res);
        
        return;
    }

    vector<string> permutation(string S){
        // Code Here
        vector<string>res;
        string op="";
        op.push_back(S[0]);
        S.erase(S.begin()+0);
        
        rajeev(S,op,res);
        return res;
        
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends