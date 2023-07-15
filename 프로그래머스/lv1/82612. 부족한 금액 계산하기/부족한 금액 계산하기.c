#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    int i;
    
    long long total = 0;
    
    for (i = 1; i <= count; i++){
        total += price * i;
    }
    
    if (total - money > 0)
        return total - money;
    else
        return 0;
}