// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int nums[], int n) {
        // code here
        //base case
         if(n==0 || n==1){
        return true ;
    }
    //processing
    if(nums[0] > nums[1]){
        return false ;
    }
    // recusrsive call
    else {
    bool check = arraySortedOrNot(nums+1 ,n-1);
    return check ;}
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends