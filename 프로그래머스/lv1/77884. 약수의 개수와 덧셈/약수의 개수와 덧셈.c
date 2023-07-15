#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int total = 0;
    int cnt;
    int i, j;
    
    for (i = left; i <= right; i++){
        cnt = 0;
        for (j = 1; j <= i; j++){
            if (i % j == 0)
                cnt++;
        }
        if (cnt % 2 == 0)
            total += i;
        else
            total -= i;
    }
    return total;
    
}