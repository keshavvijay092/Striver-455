class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26,0);
        int n = s.size();
        int m = t.size();
        if(n != m) return false;

        for(int i=0;i<n;i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(auto i:freq)
        {
            if(i != 0) return false;
        }
        return true;
    }
};