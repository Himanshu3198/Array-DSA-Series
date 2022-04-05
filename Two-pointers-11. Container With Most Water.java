//  time complexity O(n)
class Solution {
    public int maxArea(int[] height) {
           int ans=0;
        int i=0,j=height.length-1;
        while(i<j){
            int curr=Math.min(height[i],height[j]);
            ans=Math.max(ans,(j-i)*curr);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        
        return ans;
}
}
