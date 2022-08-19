#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int state;
	int arr[9];
	int i;
	int increase = 0;
	int decrease = 0;

	for (i = 0; i < 8; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < 8; i++) {
		if (arr[i] == (arr[i + 1] - 1))
			increase++;
		if (arr[i] == (arr[i + 1] + 1))
			decrease++;
	}

	if (increase == 7)
		printf("ascending");
	else if (decrease == 7)
		printf("descending");
	else
		printf("mixed");
}