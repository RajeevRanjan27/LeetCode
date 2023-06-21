//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        // sort(a, a+n);
        // sort(b, b+m);
        // int last = -1;
        
        // int i=0,j=0;
        // int count=0;
        
        // while(i<n && j<m){
            
        //     int temp=a[i];
            
        //     if(a[i]<b[j])
        //     {
        //         count++;
        //         while(i<n && a[i]==temp )i++;
        //     }
        //     else if(a[i]>b[j])
        //     {
        //         temp = b[j];
        //         count++;
        //         while(j<m && b[j]==temp)j++;
        //     }
        //     else{
                
        //         while(i<n && a[i]==temp )i++;
        //         while(j<m && b[j]==temp)j++;
        //         count++;
        //     }
        // }
        
        
        // while(i<n){
        //     if(last==a[i])
        //     {
        //         i++;
        //         continue;
        //     }
                
        //     last=a[i];
        //     count++;
        //     i++;
        // }
        // while(j<m){
        //   if(last==b[j])
        //     {
        //         j++;
        //         continue;
        //     }
                
        //     last=b[j];
        //     count++;
        //     j++;
        // }
        // return count;
        int count =0;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<max(n,m);i++){
            if(i<n){mp[a[i]]++;}
            if(i<m){mp[b[i]]++;}
        }
        
        //  for(auto x:mp){
        //      if(x.second>=1)count++;
             
        //  }
         
        return mp.size();
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends