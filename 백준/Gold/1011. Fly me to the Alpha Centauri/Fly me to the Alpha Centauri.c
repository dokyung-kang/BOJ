#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int	T, i;	// 테스트 케이스 횟수
	int	x, y;	// x: 시작 위치, y: 끝 위치. (0 <= x < y < 2^31)
	int	cnt;	// 이동 횟수
	int	remain;	// 남은 거리
	int	move;	// 이동 거리

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &x, &y);
		cnt = 0;
		remain = y - x;
		move = 1;
		while (remain > 0)
		{
			if (remain < move)
				cnt -= 1;
			remain -= (move * 2);
			cnt += 2;
			if (remain <= 0)
			{
				if (remain == -(move))
					cnt -= 1;
				break;
			}
			move++;
		}
		printf("%d\n", cnt);
	}
}