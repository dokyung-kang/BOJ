#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main(void)
{
	char arr[100000];
	int i;
	int len;
	int notEnd = 1;
	int p;

	scanf("%s", arr);
	len = strlen(arr);

	if (len == 1)
		if (arr[0] == '0')
			notEnd = 0;

	while (notEnd) {
		p = 1;
		for (i = 0; i <= len / 2; i++) 
			if (arr[i] != arr[len - i - 1]) {
				p = 0;
				break;
			}
		if (p == 1)
			printf("yes\n");
		else
			printf("no\n");
		scanf("%s", arr);
		len = strlen(arr);
		if (len == 1)
			if (arr[0] == '0')
				notEnd = 0;
	}
}