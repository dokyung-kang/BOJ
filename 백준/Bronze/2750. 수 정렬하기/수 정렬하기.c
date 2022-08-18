#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int arr[1001];
	int num;
	int i;
	int j;
	int temp;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for(i = 0; i < num - 1; i++)
		for (j = 0; j < num - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	for (i = 0; i < num; i++)
		printf("%d\n", arr[i]);
}