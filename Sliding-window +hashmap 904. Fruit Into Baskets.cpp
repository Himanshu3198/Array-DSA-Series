class Solution
{
    public:
        int totalFruit(vector<int> &fruits)
        {
            unordered_map<int, int> mp;
            set<int> st;
            int i = 0, j = 0, ans = 0, n = fruits.size();
            cout << mp.size() << "\n";
            while (j < n)
            {
                mp[fruits[j]]++;
                if (mp.size() >= 3)
                {
                    while (i < j && j < n && mp.size() >= 3)
                    {
                        mp[fruits[i]]--;
                        if (mp[fruits[i]] <= 0)
                        {
                            mp.erase(fruits[i]);
                        }
                        i++;
                    }
                }
                ans = max(ans, (j - i + 1));
                j++;
            }

            return ans;
        }
};
