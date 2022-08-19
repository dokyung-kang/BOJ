#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char n1[3], n2[3];
	int i, temp1, temp2, flag;

	scanf("%s", n1);
	scanf("%s", n2);
	
	for (i = 2; i >= 0; i--)
	{
		if (n1[i] > n2[i])
		{
			flag = 1;
			break;
		}
		else if (n1[i] < n2[i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		for (i = 2; i >= 0; i--)
			printf("%c", n1[i]);
	else
		for (i = 2; i >= 0; i--)
			printf("%c", n2[i]);
}