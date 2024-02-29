class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for(int[] customer : accounts){
            int current = 0;
            for(int bank : customer){
                current += bank;
            }
            max = Math.max(max, current);
        }
        return max;
    }
}