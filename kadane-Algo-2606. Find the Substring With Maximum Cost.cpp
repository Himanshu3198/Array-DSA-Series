class Solution
{
    public:
        int maximumCostSubstring(string s, string chars, vector<int> &vals)
        {

            unordered_map<char, int> mp;
            int p1 = 1;
            for (char c = 'a'; c <= 'z'; c++)
                mp[c] = p1++;

            for (int i = 0; i < chars.size(); i++)
                mp[chars[i]] = vals[i];

            int maxi = 0, curr = 0;
            for (int i = 0; i < s.size(); i++)
            {
                curr += mp[s[i]];
                maxi = max(maxi, curr);
                if (curr < 0) curr = 0;
            }
            return maxi;
        }
};
