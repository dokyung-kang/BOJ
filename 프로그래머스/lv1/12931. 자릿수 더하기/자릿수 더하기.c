#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int total = 0;
    
    while(n != 0){
        total += n % 10;
        n /= 10;
    }
    return total;
}