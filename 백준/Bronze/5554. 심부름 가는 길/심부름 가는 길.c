#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;
	int total;

	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);

	total = n1 + n2 + n3 + n4;

	printf("%d\n", total / 60);
	printf("%d", total % 60);
}