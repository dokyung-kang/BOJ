class Solution {
    public String solution(String s) {
        
        int num, max, min;
        
        String[] str = s.split(" ");
        
        max = Integer.MIN_VALUE;
        min = Integer.MAX_VALUE;

        for (String ss : str) {
            num = Integer.parseInt(ss);
            
            if (num > max) 
                max = num;
            
            if (num < min) 
                min = num;
        }

        return min + " " + max;
    }
}