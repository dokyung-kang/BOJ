class Solution {
    public long[] solution(int x, int n) {
        long[] answer = new long[n];
        int i;
        
        for (i = 1; i <= n; i++){
            answer[i - 1] = i * (long)x;    
        }
        
        return answer;
    }
}