class Solution {
    public int solution(String str1, String str2) {
        int j = 0;
        
        for(int i = 0; i < str1.length(); i++){
            if(str1.charAt(i) == str2.charAt(0)){
                for(j = 0; j < str2.length(); j++){
                    if(i + j >= str1.length()){
                        break;
                    }
                    if(str1.charAt(i + j) != str2.charAt(j)){
                        break;
                    }
                }
            }
            if(j == str2.length())
                return 1;
        }
        return 2;
    }
}