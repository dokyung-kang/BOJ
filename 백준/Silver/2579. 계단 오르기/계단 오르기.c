#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n;
    int sum[301];
    int score[301];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &score[i]);
    }

    //초기값 지정해주기
    sum[0] = 0;
    sum[1] = score[1];
    sum[2] = score[1] + score[2];

    //최대 값 구하기
    for (int i = 3; i <= n; i++) {
        if (sum[i - 2] > score[i - 1] + sum[i - 3])
            sum[i] = score[i] + sum[i - 2];
        else
            sum[i] = score[i] + score[i - 1] + sum[i - 3];
    }

    //결과 출력
    printf("%d\n", sum[n]);
    return 0;
}
