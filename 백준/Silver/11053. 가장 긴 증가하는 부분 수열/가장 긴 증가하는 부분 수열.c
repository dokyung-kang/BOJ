#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i, j;
	int arr[1001] = { 0 };
	int len[1001] = { 0 };
	int max;
	int maxLen = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	for (i = 0; i < n; i++) {
		max = 0;
		for (j = 0; j < i; j++) {
			if(arr[i] > arr[j])
				if (max < len[j]) 
					max = len[j];
		}
		len[i] = max += 1;
		if (maxLen < len[i])
			maxLen = len[i];
	}
	printf("%d", maxLen);
}