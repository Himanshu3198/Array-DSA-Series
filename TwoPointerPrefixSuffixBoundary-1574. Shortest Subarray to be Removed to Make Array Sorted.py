class Solution:
    def findLengthOfShortestSubarray(self, arr: List[int]) -> int:
        n = len(arr)
        i = 0
        j = n-1

        while i+1<n and arr[i] <= arr[i+1]:
              i += 1
        while j-1 >= 0 and arr[j-1] <= arr[j]:
              j -= 1
        
        ans = min(n-i-1,j)

        left =0
        right = j

        while left <=i and left < right and right<n:
              if arr[left] <= arr[right]:
                 ans = min(ans,right-left-1)
                 left +=1
              else:
                right +=1
        
        return ans
            


        

        
        
        
        
