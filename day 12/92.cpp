class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int ans = INT_MIN;
        int sum = 0;
        while(i<n)
        {
          sum = max(sum+nums[i],nums[i]);
          ans = max(sum,ans);
          i++;
        }
        return ans;
    }
};