class Solution {
    public int lengthOfLongestSubstringKDistinct(String s, int k) {
        
        int n = s.length();
        Map<Character,Integer> freq = new HashMap<>();

        int left = 0,ans = 0;
        for(int right = 0; right< n;right++){
            
            Character c = s.charAt(right);
            freq.put(c,freq.getOrDefault(c,0)+1);
            while(freq.size() > k){
                Character cc = s.charAt(left);
                int count = freq.get(cc);
                if(count == 1){
                    freq.remove(cc);
                }else{
                    freq.put(cc,count-1);
                }
                left ++;
            }
            ans = Math.max(ans,right-left+1);

        }
        return ans;
    }
}
