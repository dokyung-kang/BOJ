#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int max = 0;
void pick(int n, int* bucket, int* num, int bucketSize, int k, int maxN)	
{
	int i, lastIndex, smallest, item;
	int chosen;
	int total = 0;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			total += num[bucket[i]];
		if ((total > max) && (total <= maxN))
			max = total;
		return;
	}

	lastIndex = bucketSize - k - 1;	

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		pick(n, bucket, num, bucketSize, k - 1, maxN);
	}
}

int main(void)
{
	int n;
	int maxN;
	int *bucket;
	int *num;
	int i;

	scanf("%d %d", &n, &maxN);

	bucket = (int*)malloc(sizeof(int) * n);
	num = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

	pick(n, bucket, num, 3, 3, maxN);
	printf("%d", max);
}