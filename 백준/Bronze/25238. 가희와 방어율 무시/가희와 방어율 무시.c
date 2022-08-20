#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int cal;

	scanf("%d %d", &a, &b);

	cal = a * (100 - b) / 100;

	if (cal >= 100)
		printf("0");
	else
		printf("1");
}