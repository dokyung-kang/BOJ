#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double total = 0;
    int i;
    
    for(i = 0; i < arr_len; i++){
        total += arr[i];
    }
    total /= arr_len;
    
    return total;
}