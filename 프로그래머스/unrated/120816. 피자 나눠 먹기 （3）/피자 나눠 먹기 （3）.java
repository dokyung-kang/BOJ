class Solution {
    public int solution(int slice, int n) {
        int answer = 0;
        
        for(int i = 1; ; i++){
            answer = i;
            if(i * slice >= n)
                break;
        }
        return answer;
    }
}