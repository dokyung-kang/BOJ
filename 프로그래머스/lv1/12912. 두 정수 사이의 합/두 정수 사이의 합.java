class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        int i;
        int tmp;
        
        if (a > b){
            tmp = a;
            a = b;
            b = tmp;
        }
        
        for(i = a; i <= b; i++)
            answer +=i;
        
        return answer;
    }
}