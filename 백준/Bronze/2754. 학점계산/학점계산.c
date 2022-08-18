#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[3];

	scanf("%s", str);

	if (str[0] == 'A') {
		if (str[1] == '+')
			printf("4.3");
		else if (str[1] == '0')
			printf("4.0");
		else
			printf("3.7");
	}
	else if (str[0] == 'B') {
		if (str[1] == '+')
			printf("3.3");
		else if (str[1] == '0')
			printf("3.0");
		else
			printf("2.7");
	}
	else if (str[0] == 'C') {
		if (str[1] == '+')
			printf("2.3");
		else if (str[1] == '0')
			printf("2.0");
		else
			printf("1.7");
	}
	else if (str[0] == 'D') {
		if (str[1] == '+')
			printf("1.3");
		else if (str[1] == '0')
			printf("1.0");
		else
			printf("0.7");
	}
	else
		printf("0.0");

}