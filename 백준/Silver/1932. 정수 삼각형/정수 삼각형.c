#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    int i, j;
    int list[501][501];
    int max = -1;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j <= i; j++)
            scanf("%d", &list[i][j]);
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                list[i][j] += list[i - 1][j];
            }
            else if (i == j)
            {
                list[i][j] += list[i - 1][j - 1];
            }
            else
            {
                if (list[i - 1][j] > list[i - 1][j - 1])
                    list[i][j] += list[i - 1][j];
                else
                    list[i][j] += list[i - 1][j - 1];
            }
            if (max < list[i][j])
                max = list[i][j];
        }
    }
    printf("%d", max);
}
