#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	if (n1 == n2)
		printf("%d", n1);
	else if (n1 > n2)
		printf("%d", n1);
	else
		printf("%d", n2);
}
