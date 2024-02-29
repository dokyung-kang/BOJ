class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> answer = new ArrayList<>(n);
        
        for (int i = 1; i <= n; i++){
            boolean div3 = i % 3 == 0;
            boolean div5 = i % 5 == 0;
            
            String str = "";
            
            if (div3){
                str += "Fizz";
            }
            if (div5){
                str += "Buzz";
            }
            if (str.isEmpty()){
                str += String.valueOf(i);
            }
            answer.add(str);
        }
        
        return answer;
    }
}