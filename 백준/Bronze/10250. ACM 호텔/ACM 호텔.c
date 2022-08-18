#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int T, H, W, N;
	int i, wNum;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		wNum = 1;
		scanf("%d %d %d", &H, &W, &N);
		while (N > H)
		{
			N -= H;
			wNum++;
		}
		printf("%d%02d\n", N, wNum);
	}
}