#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1;
	int n2;
	int ten = 1;
	int total = 0;

	scanf("%d", &n1);
	scanf("%d", &n2);

	while (n2 != 0) {
		printf("%d\n", n1 * (n2 % 10));
		total += n1 * (n2 % 10) * ten;
		ten *= 10;
		n2 /= 10;
	}

	printf("%d", total);
}