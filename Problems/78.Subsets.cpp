class Solution {

private:
void helper(vector<vector<int>> &ans, vector<int> &nums, vector<int> output ,int index){
    if(index>= nums.size()){
        ans.push_back(output);
        return;
    }
    helper(ans, nums, output, index+1);
    output.push_back(nums[index]);
    helper(ans, nums, output, index+1);
    
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0;
        vector<int> output;
        vector<vector<int>> ans;
        helper(ans, nums, output, index);
        return ans;
    }
};