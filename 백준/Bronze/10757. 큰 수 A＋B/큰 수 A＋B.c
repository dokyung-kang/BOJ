#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
void reverse(char arr[])
{
	char temp;
	int len;

	len = strlen(arr);
	for (int i = 0; i < len / 2; i++) {
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}

int main(void) {
	char n1[10002] = { 0 };
	char n2[10002] = { 0 };
	char sum[10003] = { 0 };
	int carry = 0, i;
	int len;
	int total;

	scanf("%s %s", n1, n2);

	reverse(n1);
	reverse(n2);

	if (strlen(n1) > strlen(n2))
		len = strlen(n1);
	else
		len = strlen(n2);

	for (i = 0; i < len; i++) {
		total = (n1[i] - '0') + (n2[i] - '0') + carry;
		while (total < 0)
			total += '0';
		if (total > 9)
			carry = 1;
		else
			carry = 0;
		sum[i] = total % 10 + '0';
	}
	if (carry == 1)
		sum[len] = '1';

	reverse(sum);

	printf("%s", sum);
}
