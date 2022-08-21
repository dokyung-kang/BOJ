#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int burger[3];
	int drink[2];
	int i, j;
	int min = 4000;

	for (i = 0; i < 3; i++)
		scanf("%d", &burger[i]);
	for (i = 0; i < 2; i++)
		scanf("%d", &drink[i]);

	for(i = 0; i < 3; i++)
		for (j = 0; j < 2; j++) 
			if (min > burger[i] + drink[j])
				min = burger[i] + drink[j];
		
	printf("%d", min - 50);
}