#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, C, num;
	int n[1001];
	int total, sum;
	double avg, per;

	scanf("%d", &C);
	for (i = 0; i < C; i++)
	{
		total = 0;
		sum = 0;
		scanf("%d", &num);
		for (j = 0; j < num; j++)
		{
			scanf("%d", &n[j]);
			total += n[j];
		}
		avg = (double)total / num;
		for (j = 0; j < num; j++)
			if (n[j] > avg)
				sum++;
		per = (double)sum / num * 100;
		printf("%.3f%\n", per);
	}
}