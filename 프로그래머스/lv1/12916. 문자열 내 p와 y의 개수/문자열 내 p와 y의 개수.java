class Solution {
    boolean solution(String s) {
        int pCnt = 0;
        int yCnt = 0;
        int i;
        String[] str = s.split("");
        int len = str.length;
        
        for (i = 0; i < len; i++){
            if (str[i].equals("P") || str[i].equals("p"))
                pCnt++;
            if (str[i].equals("Y") || str[i].equals("y"))
                yCnt++;
        }
        
        if (pCnt == yCnt)
            return true;
        else
            return false;
        
    }
}