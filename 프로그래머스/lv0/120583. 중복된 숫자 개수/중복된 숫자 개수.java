class Solution {
    public int solution(int[] array, int n) {
        int i;
        int cnt = 0;
        int len;
        len = array.length;
        
        for (i = 0; i < len; i++)
            if (n == array[i])
                cnt++;
        
        return cnt;
    }
}