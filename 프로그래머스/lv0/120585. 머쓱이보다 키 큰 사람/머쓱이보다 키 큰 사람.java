class Solution {
    public int solution(int[] array, int height) {
        int len;
        int i;
        int cnt = 0;
        
        len = array.length;
        
        for (i = 0; i < len; i++){
            if (array[i] > height){
                cnt++;
            }
        }
        
        return cnt;
    }
}