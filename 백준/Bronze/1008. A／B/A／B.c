#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A;
	int B;
	double div;

	scanf("%d %d", &A, &B);

	div = (double)A / B;

	printf("%.9f", div);
}