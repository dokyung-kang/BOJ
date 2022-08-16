#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C, total;
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
	
	scanf("%d %d %d", &A, &B, &C);
	total = A * B * C;
	while (total != 0)
	{
		if (total % 10 == 0)
			c0++;
		else if (total % 10 == 1)
			c1++;
		else if (total % 10 == 2)
			c2++;
		else if (total % 10 == 3)
			c3++;
		else if (total % 10 == 4)
			c4++;
		else if (total % 10 == 5)
			c5++;
		else if (total % 10 == 6)
			c6++;
		else if (total % 10 == 7)
			c7++;
		else if (total % 10 == 8)
			c8++;
		else
			c9++;
		total /= 10;
	}
	printf("%d\n", c0);
	printf("%d\n", c1);
	printf("%d\n", c2);
	printf("%d\n", c3);
	printf("%d\n", c4);
	printf("%d\n", c5);
	printf("%d\n", c6);
	printf("%d\n", c7);
	printf("%d\n", c8);
	printf("%d\n", c9);
}