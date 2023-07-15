#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char str[5][15];
int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++) 
		scanf("%s", str[i]);
	
	for (j = 0; j < 15; j++) {
		for (i = 0; i < 5; i++) {
			if (str[i][j] == NULL)
				continue;
			else
				printf("%c", str[i][j]);
		}
	}
}