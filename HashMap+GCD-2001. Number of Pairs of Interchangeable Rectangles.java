class Solution {


    /*
     intuition : to avoid collision reduce it to canonical form and store it string with any special character 
    */
    private int getGcd(int a,int b){
        if(b==0) return a;
        return getGcd(b,a%b);
    }
    public long interchangeableRectangles(int[][] rectangles) {
        
        Map<String,Long> map = new HashMap<>();

        long count = 0L;
        for(int [] rect:rectangles){

            int u= rect[0];
            int v = rect[1];
            int gcd = getGcd(u,v);
            u = u/gcd;
            v = v/gcd;

            String ratio = u + "/" + v;
            count += map.getOrDefault(ratio, 0L);
            map.put(ratio,map.getOrDefault(ratio,0L)+1);
        }

        return count;
    }
}
