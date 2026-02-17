class Solution:
    def numSubseq(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        cache = [1]*n
        res = 0
        mod = 10**9+7
        for i in range(1,n):
            cache[i] = (cache[i-1]*2)%mod
        
        low,high = 0,n-1
        while low<=high:
             cum = nums[low]+nums[high]
             if cum <= target:
                sz = high-low
                res += (cache[sz])
                res %=mod
                low += 1
             else: 
                 high -= 1
        return res

        
