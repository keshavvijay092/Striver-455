// Approach 1:using space 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
          k = k % n;
        if (k == 0) return;
        int index = n-k;
        vector<int>ans(n,-1);
        int i = 0;
        while(index<n)
        {
            ans[i] = nums[index];
            i++;
            index++;
        }

       for(int j=0;j<n-k;j++)
       {
        ans[i] = nums[j];
        i++;
       }

       nums = ans;
       return ;

    }
};

// Approach 2: without space 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int  n = nums.size();
        k  = k%n;

        if(k == 0) return ;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        return ;
    }
};