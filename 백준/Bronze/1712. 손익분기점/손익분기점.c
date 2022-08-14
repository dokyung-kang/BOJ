#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C;
	int total;

	scanf("%d %d %d", &A, &B, &C);
		
	total = A / (C - B) + 1;

	if (C <= B)
		printf("-1\n");
	else
		printf("%d\n", total);
}