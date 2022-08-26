#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int N, K;
    int list[10001][2];
    int cal[101][100001];
    int i, j;

    scanf("%d %d", &N, &K);

    for (i = 0; i < N; i++) 
        scanf("%d %d", &list[i][0], &list[i][1]);

    for (i = 0; i < N + 1; i++) 
        cal[i][0] = 0;
    
    for (i = 0; i < K + 1; i++) 
        cal[0][i] = 0;
    
    for (i = 1; i < N + 1; i++) {
        for (j = 1; j < K + 1; j++) {
            if (list[i - 1][0] > j)
                cal[i][j] = cal[i - 1][j];
            else {
                if (cal[i - 1][j] > cal[i - 1][j - list[i - 1][0]] + list[i - 1][1])
                    cal[i][j] = cal[i - 1][j];
                else
                    cal[i][j] = cal[i - 1][j - list[i - 1][0]] + list[i - 1][1];
            }
        }
    }
    printf("%d\n", cal[N][K]);
}

