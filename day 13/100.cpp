class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int unique=1;
        
        for(int j=1;j<n;j++)
        {
            if(nums[j-1] != nums[j])
            {
                nums[unique] = nums[j];
                unique++;
            }
        }
        return unique;
    }
};