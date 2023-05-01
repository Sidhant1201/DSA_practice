//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    bool isPossible(int arr[], int n, int k, long long mid){
        long long paintercount = 1;
        long long logcount = 0;
        for(int i =0; i< n; i++){
            if(logcount+ arr[i]<= mid){
                logcount+= arr[i];
            }
            else{
                paintercount++;
                logcount = arr[i];
                if(paintercount> k|| arr[i]> mid) 
                return false;
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long s = 0, sum =0; 
        for(int i = 0; i< n; i++){
            sum += arr[i];
        }
        
        long long mid = s+ (sum-s)/2;
        long long ans =0;
        while(s<= sum){
            // cout<< "ans:"<< ans<<endl;
            if(isPossible(arr, n, k, mid)){
                ans = mid;
                sum = mid-1;
            }
            else s = mid+1;
            mid = s+ (sum- s)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends