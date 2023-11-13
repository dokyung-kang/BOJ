class Solution {
    fun solution(n: Int): Int {
        var answer: Int = 2
        
        for (i in 1 until n){
            if (i * i == n)
                answer = 1
        }
        return answer
    }
}