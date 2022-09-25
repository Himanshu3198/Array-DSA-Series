class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        
        int n=names.length;
        String[] res=new String[n];
        TreeMap<Integer,String>tm=new TreeMap<Integer,String>(Collections.reverseOrder());
        for(int i=0;i<n;i++){
            tm.put(heights[i],names[i]);
        }
        int i=0;
        for(Map.Entry<Integer,String> it:tm.entrySet()){
            
            res[i++]=it.getValue();
        }
        return res;
        
        
    }
}
