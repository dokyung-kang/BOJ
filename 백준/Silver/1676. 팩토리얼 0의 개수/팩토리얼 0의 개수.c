#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int num5;	
	int num25;	
	int num125;	
	int total;

	scanf("%d", &n);

	num5 = n / 5;
	num25 = n / 25;
	num125 = n / 125;

	total = num5 + num25 + num125;

	printf("%d", total);
}

