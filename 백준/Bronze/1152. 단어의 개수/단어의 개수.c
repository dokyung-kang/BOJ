#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i, len, cnt = 0;
    char str[1000000];

    scanf("%[^\n]", str);
    len = strlen(str);

    if (len == 1) {
        if (str[0] == ' '){
            printf("0\n");
            return 0;
        }
    }

    for (i = 1; i < len - 1; i++)
        if (str[i] == ' ')
            cnt++;

    printf("%d\n", cnt + 1);
    return 0;
}
