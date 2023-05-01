#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

bool isPossible(int n, vector<vector<int>> &arr,int mid, int B){
    int sum= 0;
    for(int i = 0; i< n; i++){
        for(int j= 0; j< arr[i].size(); j++){
            if(arr[i][j]<= mid){
                sum+= arr[i][j];
            }
        }
        
    }
    if(sum<= B)
    return true;
    return false;
}
int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    //Write your code here.
    int s = 0; 
    int e = B;
    int ans = 0;
    while(s<= e){
        int mid = s + (e- s)/2;
        if(isPossible(n, arr, mid, B)){
            e= mid-1;
            ans= mid;
        }
        else{
            s= mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>> n;
    vector<vector<int>> arr;
    for(int i=0; i< n; i++){
        for(int j =0; j< )
    }
}