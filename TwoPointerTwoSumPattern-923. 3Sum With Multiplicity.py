class Solution:
    def threeSumMulti(self, arr: List[int], target: int) -> int:
        n = len(arr)
        mod = 10**9+7
        ans = 0
        arr.sort()

        for i in range(0,n-2):
            low = i+1
            high = n-1
            look = target-arr[i]
            while low < high:
                  tot = arr[low]+arr[high]
                  if tot == look:
                     count1 = 1
                     count2 = 1
                     while low<high and arr[low] == arr[low+1]:
                            count1 += 1
                            low += 1
                     while high>low and arr[high] == arr[high-1]:
                           count2 += 1
                           high -= 1
                     if low == high:
                        ans += ((count1*(count1-1))//2)
                     else:
                         ans += (count1*count2)
                     ans %= mod
                     high -= 1
                     low += 1
                        
                  elif tot < look:
                       low += 1
                  else:
                      high -= 1
        return ans

        
                       



        
