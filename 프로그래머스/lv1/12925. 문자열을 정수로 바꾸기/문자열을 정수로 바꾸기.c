#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int i;
    int num = 0;
    
    if (s[0] == '-' || s[0] == '+'){
        num = (s[1] - 48);
        for (i = 2; i < strlen(s); i++){
            num *= 10;
            num += (s[i] - 48);
        }
        if (s[0] == '-')
            num *= -1;
    }
    else {
        num = (s[0] - 48);
        for (i = 1; i < strlen(s); i++){
            num *= 10;
            num += (s[i] - 48);
        }
    }
    return num;
}