#include <stdio.h>
int main() {
	int money;
	int cnt = 0;
	
	scanf("%d", &money);
	
	cnt += money / 40;
	money %= 40;
	
	cnt += money / 20;
	money %= 20;
	
	cnt += money / 10;
	money %= 10;
	
	cnt += money / 5;
	money %= 5;
	
	cnt += money / 1;

	printf("%d", cnt);
	
	return 0;
}
