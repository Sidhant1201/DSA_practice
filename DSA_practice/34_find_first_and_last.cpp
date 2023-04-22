#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    int findbin(vector<int> &nums, int low, int high, int target){
        while(low<= high){
            int mid = low + (high- low)/2;
            if(nums[mid]<target ){
                low = mid+1;
            }
            else if(nums[mid]> target){
                high = mid- 1;
            }
            else return mid;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int tempans = findbin(nums, 0, n, target);
        int start = tempans;
        int end = tempans;
        
        while(true){
            int tempstart= findbin(nums, 0, start-1, target);
            if(tempstart==-1) break;
            start= tempstart;
        }
        
        while(true){
            int tempend= findbin(nums, end+1, n, target);
            if(tempend==-1) break;
            end= tempend;
        }

        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};
    return 0;
}