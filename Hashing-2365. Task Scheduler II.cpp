
https://leetcode.com/problems/task-scheduler-ii/discuss/2397380/short-clean-code-oror-explained!-oror-faster-than-100-oror-easy-to-understand-oror-c%2B%2B 
class Solution
{
public:
    long long taskSchedulerII(vector<int> &tasks, int space)
    {

        long long  days = 1,n = tasks.size();
        unordered_map<long, long> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(tasks[i]))
            {
                long long rest=days - mp[tasks[i]];
                if(rest<=space) days+=(1+space-rest);
            }
            mp[tasks[i]] = days;
            days++;
        }
        return days-1;
   }
    
};
