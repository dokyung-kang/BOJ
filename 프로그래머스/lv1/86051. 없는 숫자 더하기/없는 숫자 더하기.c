#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int total = 0;
    int order[10] = { 0 };
    int i;
    
    for (i = 0l; i < numbers_len; i++){
        order[numbers[i]]++;
    }
    for(i = 1; i < 10; i++){
        if (order[i] == 0)
            total += i;
    }
    return total;
    
}