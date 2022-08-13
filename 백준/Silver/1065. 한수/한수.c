#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int hanN(int n);
int main(void)
{
	int num, hNum;
	scanf("%d", &num);
	hNum = hanN(num);
	printf("%d", hNum);
}
int hanN(int n)
{
	int i, n1, n2, n3;
	int count = 0;
	int result;
	
	if (n < 100)
		return n;
	else
	{
		for (i = 100; i <= n; i++)
		{
			n1 = i / 100;
			n2 = i % 100 / 10;
			n3 = i % 100 % 10;
			if ((n1 - n2) == (n2 - n3))
				count++;
		}
		result = 99 + count;
		return result;
	}
}
