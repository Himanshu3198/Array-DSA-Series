class Solution {
    public int minimumK(int[] nums) {
        int low=1;
        int high = 100000;
        int ans = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            long k =(long) mid*mid;
            int opr = 0;
            for(int num:nums){
                opr += (num+mid-1)/mid;
                if(opr> k) break;
            }
            if(opr<=k){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }   
        }
        return ans;
    }
}
