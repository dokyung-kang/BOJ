#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int M[41][3] = { 0 };
void fibonacci(int n) {
	if (n == 0) {
		M[0][0] = 1;
		M[0][1] = 0;
	}
	else if (n == 1) {
		M[1][0] = 0;
		M[1][1] = 1;
	}
	else {
		M[n][0] = M[n - 1][0] + M[n - 2][0];
		M[n][1] = M[n - 1][1] + M[n - 2][1];
	}

}

int main(void) {
	int T, n;
	int i, j;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &n);

		for (j = 0; j <= n; j++) {
			fibonacci(j);
		}

		printf("%d %d\n", M[n][0], M[n][1]);
	}
}