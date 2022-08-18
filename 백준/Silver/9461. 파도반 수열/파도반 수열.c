#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	long long list[101] = { 0 };
	int in[101];

	list[0] = 0;
	list[1] = 1;
	list[2] = 1;
	list[3] = 1;

	scanf("%d", &n);

	for (i = 4; i <= 100; i++)
		list[i] = list[i - 2] + list[i - 3];
	
	for (i = 0; i < n; i++) 
		scanf("%d", &in[i]);
	
	for (i = 0; i < n; i++)
		printf("%lld\n", list[in[i]]);

}