#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A;
	int B;
	int minus;

	scanf("%d %d", &A, &B);

	minus = A - B;

	printf("%d", minus);
}