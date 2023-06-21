//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        
        int a = 0, b = 0, c = 0;
        
        for(int i = 0; i<n; i++){
            if(arr[i]==0)a++;
            else if(arr[i]==1)b++;
            else c++;
        }
        
        for(int i=0;i<a;i++){
            arr[i]=0;
            
        }
         for(int i=0;i<b;i++){
            arr[i+a]=1;
            
        }
         for(int i=0;i<c;i++){
            arr[i+a+b]=2;
            
        }
        
        
        
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends