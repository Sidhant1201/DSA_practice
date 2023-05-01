class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans; 
        int s1 = 0, s2= 0;
        while(s1< m&& s2< n){
            if(nums1[s1]< nums2[s2]){
                ans.push_back(nums1[s1]);
                s1++;
            }
            else if(nums1[s1]> nums2[s2]){
                ans.push_back(nums2[s2]);
                s2++;
            }
            else{
                ans.push_back(nums1[s1]);
                ans.push_back(nums2[s2]);
                s1++;
                s2++;
            }
        }
        while(s1<m||s2<n){
            if(s1< m){
                ans.push_back(nums1[s1]);
                s1++;
            }
            if(s2< n){
                ans.push_back(nums2[s2]);
                s2++;
            }
        }
        for(int i =0; i< ans.size(); i++){
            nums1[i] = ans[i];
        }
    }
};