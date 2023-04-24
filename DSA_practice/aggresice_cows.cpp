//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    bool isPossible(vector<int> &arr, int n, int k, int mid){
        int lastcow = arr[0];
        int cowcount = 1;
        for(int i=0 ; i< n; i++){
            if(arr[i] - lastcow >= mid){
                cowcount++;
                if(cowcount == k){
                    return true;
                }
                lastcow =arr[i];
            }
            
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int s = 0;
        int e = stalls[n-1] - stalls[0];
        int ans = -1;
        
        int mid = s+ (e- s)/2;
        while(s<= e){
            if(isPossible(stalls, n, k, mid)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+ (e- s)/2;
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends