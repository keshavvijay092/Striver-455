class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int i=0;
        int n = arr.size();
        if(n == 1) return arr[0];
        int j=1;
        int ans = 0;
        while(j<n)
        {
            int sum = arr[i]+arr[j];
            i = j;
            j++;
        ans = max(sum,ans);
            
        }
        return ans;
        
    }
};