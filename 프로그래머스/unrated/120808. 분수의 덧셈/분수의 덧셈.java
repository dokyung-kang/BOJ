class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int[] answer = new int[2];
        int n;
        int d;
        int i;
        
        if (numer1 > denom1){
            for(i = 1; i <= denom1; i++){
                if (numer1 % i == 0 && denom1 % i == 0){
                    numer1 /= i;
                    denom1 /= i;
                }
            }
        }
        else {
            for(i = 1; i <= numer1; i++){
                if (numer1 % i == 0 && denom1 % i == 0){
                    numer1 /= i;
                    denom1 /= i;
                }
            }
        }
        
        if (numer2 > denom2){
            for(i = 1; i <= denom2; i++){
                if (numer2 % i == 0 && denom2 % i == 0){
                    numer2 /= i;
                    denom2 /= i;
                }
            }
        }
        else {
            for(i = 1; i <= numer2; i++){
                if (numer2 % i == 0 && denom2 % i == 0){
                    numer2 /= i;
                    denom2 /= i;
                }
            }
        }
        
        if (denom1 == denom2){
            n = numer1 + numer2;
            d = denom1;
        }
        else{
            if (denom1 > denom2){
                if((denom1 % denom2 == 0)){
                    n = numer1 + numer2 * (denom1 / denom2);
                    d = denom1;
                }
                else{
                    n = numer1 * denom2 + numer2 * denom1;
                    d = denom1 * denom2;
                }
            }
            else {
                if(denom2 % denom1 == 0){
                    n = numer1 * (denom2 / denom1) + numer2;
                    d = denom2;
                }
                else{
                    n = numer1 * denom2 + numer2 * denom1;
                    d = denom1 * denom2;
                }
            }
        }
        
        if (n > d){
            for(i = 1; i <= d; i++){
                if (n % i == 0 && d % i == 0){
                    n /= i;
                    d /= i;
                }
            }
        }
        else {
            for(i = 1; i <= n; i++){
                if (n % i == 0 && d % i == 0){
                    n /= i;
                    d /= i;
                }
            }
        }
        
        answer[0] = n;
        answer[1] = d;
        
        return answer;
    }
}