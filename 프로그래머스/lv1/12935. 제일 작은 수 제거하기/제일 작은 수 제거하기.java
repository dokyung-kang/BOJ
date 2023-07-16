class Solution {
    public int[] solution(int[] arr) {
        int len = arr.length;
        int i;
        int min;
        int idx = 0;
        
        if (len == 1){
            int[] answer = { -1 };
            return answer;
        }
        else {
            int[] answer = new int[arr.length - 1];
            
            min = arr[0];
            for (i = 0; i < len; i++){
                if (min > arr[i])
                    min = arr[i];
            }    
            for (i = 0; i < len; i++){
                if (arr[i] != min){
                    answer[idx++] = arr[i];
                }
            }
            return answer;
        }
    }
}