#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h;
	int m;
	int c;
	int total = 0;

	scanf("%d %d", &h, &m);
	scanf("%d", &c);

	if (m + c < 60)
		printf("%d %d", h, m + c);
	else {
		h += (m + c) / 60;
		if (h >= 24)
			h -= 24;
		printf("%d %d", h, (m + c) % 60);
	}

}