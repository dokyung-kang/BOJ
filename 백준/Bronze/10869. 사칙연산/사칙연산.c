#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A;
	int B;
	int sum;
	int mi;
	int mul;
	int div;
	int rest;

	scanf("%d %d", &A, &B);

	sum = A + B;
	mi = A - B;
	mul = A * B;
	div = A / B;
	rest = A % B;

	printf("%d\n", sum);
	printf("%d\n", mi);
	printf("%d\n", mul);
	printf("%d\n", div);
	printf("%d\n", rest);
}