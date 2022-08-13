#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y, w, h;
	int minX;
	int minY;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	minX = x;
	minY = y;

	if (minX > w - x)
		minX = w - x;

	if (minY > h - y)
		minY = h - y;

	if (minX > minY)
		printf("%d", minY);
	else
		printf("%d", minX);

	return 0;
}