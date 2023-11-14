class Solution {
    public int[] solution(int n) {
        int[] answer;
        int idx = 0;
        int i;

        if (n % 2 == 0)
            answer = new int[n / 2];
        else
            answer = new int[n / 2 + 1];

        for (i = 1; i <= n; i += 2) {
            answer[idx++] = i;
        }

        return answer;
    }
}