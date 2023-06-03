//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    
    
    sort(arr,arr+n);
    int start=0,end=n-1;
     while(start<=end){
         int mid=start+(end-start)/2;
         
         if(arr[mid]==x)return {arr[mid],arr[mid]};
         else if(arr[mid]>x)end=mid-1;
         else start=mid+1;
     }
     
     if(start==n){
         return {arr[end],-1};
     }
     if(end==-1){
         return {-1,arr[start]};
     }
     return {arr[end],arr[start]};
     
     
    
    
    
    
    
    
}