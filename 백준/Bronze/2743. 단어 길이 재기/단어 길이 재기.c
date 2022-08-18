#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[101];
	int len;

	scanf("%s", str);
	len = strlen(str);

	printf("%d", len);
}