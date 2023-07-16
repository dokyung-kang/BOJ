class Solution {
    public int solution(int[] numbers) {
        int max1;
        int max2;
        int i;
        int len = numbers.length;
        
        if (numbers[0] > numbers[1]){
            max1 = numbers[0];
            max2 = numbers[1];
        }
        else {
            max1 = numbers[1];
            max2 = numbers[0];
        }
        for (i = 2; i < len; i++){
            if (numbers[i] >= max1){
                max2 = max1;
                max1 = numbers[i];
            }
            else if (max1 > numbers[i] && numbers[i] > max2){
                max2 = numbers[i];
            }
        }
        
        return max1 * max2;
    }
}