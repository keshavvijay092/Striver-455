
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<int,vector<int>,greater<int>>qt;
        
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
                qt.push(arr[i][j]);
            }
        }
        vector<int>ans;
        while(!qt.empty())
        {
            ans.push_back(qt.top());
            qt.pop();
        }
        return ans;
    }