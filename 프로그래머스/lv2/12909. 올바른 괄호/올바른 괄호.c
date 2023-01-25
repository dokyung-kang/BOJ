#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int cnt = 0;
    int i;
    
    if(s[0] == ')')
        return false;
    
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == '(')
            cnt++;
        else{
            cnt--;
            if(cnt < 0)
                return false;
        }
    }
    if(cnt == 0)
        return true;
    return false;
}