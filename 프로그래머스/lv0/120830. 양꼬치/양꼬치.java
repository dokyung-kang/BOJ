class Solution {
    public int solution(int n, int k) {
        int service;
        int total = 0;
        
        service = n / 10;
        total = n * 12000 + k * 2000 - service * 2000;
        
        return total;
    }
}