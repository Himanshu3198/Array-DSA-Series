class Solution
{
    public:
        bool increasingTriplet(vector<int> &nums)
        {

            int n = nums.size();
            int first = INT_MIN, second = INT_MIN, idx1 = n - 1, idx2 = n - 2;

            for (int i = n - 1; i >= 0; i--)
            {

                if (nums[i] > first)
                {
                    first = nums[i];
                    idx1 = i;
                }
                else if (nums[i] < first && nums[i] > second && i < idx1)
                {
                    second = nums[i];
                    idx2 = i;
                }
                else if (nums[i] < first && nums[i] < second && i < idx2 && i < idx1) return true;
            }
            return false;
        }
};
