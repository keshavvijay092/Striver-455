class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>&curr,int index)
    {
        if(index >= nums.size())
        {
            ans.push_back(curr);
            return ;
        }

        solve(nums,ans,curr,index+1);
        curr.push_back(nums[index]);
        solve(nums,ans,curr,index+1);
        curr.pop_back();
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>val;
        
        solve(nums,ans,val,0);
        return ans;
    }