#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int M[100][100][100] = { 0 };   
int w(int a, int b, int c, int M[][100][100]) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20) {
        if (M[a][b][c] == 0)
            M[a][b][c] = w(20, 20, 20, M);
        return M[a][b][c];
    }
    else if (a < b && b < c) {
        if (M[a][b][c - 1] == 0)
            M[a][b][c - 1] = w(a, b, c - 1, M);
        if (M[a][b - 1][c - 1] == 0)
            M[a][b - 1][c - 1] = w(a, b - 1, c - 1, M);
        if (M[a][b - 1][c] == 0)
            M[a][b - 1][c] = w(a, b - 1, c, M);
        return M[a][b][c - 1] + M[a][b - 1][c - 1] - M[a][b - 1][c];
    }
    else {
        if (M[a - 1][b][c] == 0)
            M[a - 1][b][c] = w(a - 1, b, c, M);
        if (M[a - 1][b - 1][c] == 0)
            M[a - 1][b - 1][c] = w(a - 1, b - 1, c, M);
        if (M[a - 1][b][c - 1] == 0)
            M[a - 1][b][c - 1] = w(a - 1, b, c - 1, M);
        if (M[a - 1][b - 1][c - 1] == 0)
            M[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1, M);
        return M[a - 1][b][c] + M[a - 1][b - 1][c] + M[a - 1][b][c - 1] - M[a - 1][b - 1][c - 1];
    }
}

int main(void) {
    int a, b, c;
    int M[100][100][100] = { 0 };
    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == -1 && b == -1 && c == -1)
            break;
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c, M));
    }
}