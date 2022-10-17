class Solution
{
    public:
        int countDistinctIntegers(vector<int> &nums)
        {
            int ans = 0;
            set<int> st;
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                st.insert(nums[i]);
                int x = nums[i], a = 0;
                while (x > 0)
                {
                    a = a *10 + x % 10;
                    x /= 10;
                }
                st.insert(a);
            }
            return st.size();
        }
};
