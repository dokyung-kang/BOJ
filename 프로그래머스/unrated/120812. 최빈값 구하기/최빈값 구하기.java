class Solution {
    public int solution(int[] array) {
        int arr[] = new int[1001];
        int i;
        int answer = 0;
        int same = 0;
        
        for(i = 0; i < array.length; i++){
            arr[array[i]]++;
        }
        for(i = 1; i < 1001; i++){
            if (arr[answer] < arr[i]){
                answer = i;
                same = 0;
            }
            else if(arr[answer] == arr[i]){
                same = 1;
            }
        }
        
        if(same == 1)
            if(array.length > 1)
                answer = -1;
        
        return answer;
    }
}