#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, n1, n2, n3, n4;
	int n0;
	int count = 0;

	scanf("%d", &n);
	n0 = n;

	while (1)
	{
		n1 = n0 / 10;
		n2 = n0 % 10;
		n3 = (n1 + n2) % 10;
		n4 = n2 * 10 + n3;
		count++;
		if (n == n4)
			break;
		n0 = n4;
	} 
	printf("%d", count);
}