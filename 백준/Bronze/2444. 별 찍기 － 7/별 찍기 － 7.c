#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int num;
	int n, m;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		for (m = 0; m < num - i - 1; m++)
			printf(" ");
		for (n = 0; n < 2 * i + 1; n++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < num - 1; i++) {
		for (n = 0; n <= i; n++)
			printf(" ");
		for (m = 0; m < (num - i - 1) * 2 - 1; m++)
			printf("*");
		printf("\n");
	}

}