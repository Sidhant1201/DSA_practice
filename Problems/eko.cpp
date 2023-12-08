#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &trees, int n, int k, int mid){
    int totalwood = 0;
    for(int i=0; i< n; i++){
        if(trees[i] - mid> 0){
            totalwood+= trees[i]- mid;
            if(totalwood >= k){
                return true;
            }

        }
    }
    return false;
}

void helper(vector<int> &trees, int n, int k){
    sort(trees.begin(), trees.end());
    int s = 0;
    int e = trees[n-1];
    int mid = s+ (e- s)/2;
    int ans = -1;
    while(s<= e){
        if(isPossible(trees, n, k, mid)){
            
            ans = mid;
            s = mid+1;
        }
        else{
            e= mid-1;
        }
        mid = s+ (e- s)/2;

    }
    cout<< ans;
}

int main(){
    int n, k;
    cin>>n>> k;
    vector<int> trees;
    for(int i = 0; i< n; i++){
        int temp;
        cin>> temp;
        trees.push_back(temp);
    }
    helper(trees, n, k);
    return 0;
}