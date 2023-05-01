class Solution {
public:
    bool ispossible(vector<int> &nums, int n, int k, int mid){
        int studentcount = 1;
        int pagecount = 0;
        for(int i= 0; i<=n; i++){
            if(pagecount+nums[i]<=mid){
                pagecount+= nums[i];

            }
            else{
                studentcount++;

                if(studentcount> k|| nums[i]> mid)
                return false;

                pagecount= nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int e =0;
        int ans = 0;
        int n = nums.size()-1;
        for(int i= 0; i<= n; i++){
            e+= nums[i];
        }

        while(s<= e){
            int mid = s+ (e-s)/2;
            if(ispossible(nums, n, k, mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s= mid+1;
            }

        }
        return ans;

    }
};