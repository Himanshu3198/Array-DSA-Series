class Solution {
    public int maxFreq(String s, int maxLetters, int minSize, int maxSize) {
        
         int n = s.length(), left = 0;
         Map<Character,Integer> freq = new HashMap<>();
         Map<String,Integer>  countMap = new HashMap<>();

         for(int right = 0; right < n; right++){

             Character c = s.charAt(right);
             freq.put(c,freq.getOrDefault(c,0)+1);
             int len = right-left+1;
             if(len > minSize){
                int count = freq.get(s.charAt(left));
                if(count == 1) freq.remove(s.charAt(left));
                else freq.put(s.charAt(left),count-1);
                left++;
             }
            len = right - left + 1;
             if(len >= minSize && len <= maxSize && freq.size() <= maxLetters){
                 String  t = s.substring(left,right+1);
                 countMap.put(t,countMap.getOrDefault(t,0)+1);
             }
         

         }

         int result = 0;
         for(int v:countMap.values()) result = Math.max(result,v);
         
         return result;

    }
}
