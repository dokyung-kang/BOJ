#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);


	//a, b, c
	//a, c, b
	//b, a, c
	//b, c, a
	//c, a, b
	//c, b, a

	if ((a > b) && (a > c)) {
		if (b > c)
			printf("%d", b);
		else
			printf("%d", c);
	}
	else if ((b > a) && (b > c)) {
		if (a > c)
			printf("%d", a);
		else
			printf("%d", c);
	}
	else {
		if (a > b)
			printf("%d", a);
		else
			printf("%d", b);
	}

}
