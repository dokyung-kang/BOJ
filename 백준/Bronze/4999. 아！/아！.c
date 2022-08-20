#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[1001];
	char str2[1001];
	int len1;
	int len2;

	scanf("%s", str1);
	scanf("%s", str2);

	len1 = strlen(str1);
	len2 = strlen(str2);

	if (len1 >= len2)
		printf("go");
	else
		printf("no");
}