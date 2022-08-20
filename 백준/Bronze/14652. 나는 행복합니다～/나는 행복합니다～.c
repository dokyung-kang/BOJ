#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, m;
	int num;

	scanf("%d %d %d", &n, &m, &num);

	printf("%d %d", num / m, num % m);
}