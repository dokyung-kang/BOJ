#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	int temp;
	int i, j;
	int len;

	scanf("%s", str);

	len = strlen(str);

	for(i = 0; i < len - 1; i++)
		for (j = i; j < len; j++) {
			if (str[i] < str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}

	printf("%s", str);
}
