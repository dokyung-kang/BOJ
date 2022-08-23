#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	char str[255];
	int cnt;
	int i;

	while (1) {
		cnt = 0;		
		gets(str);
		if (str[0] == '#')	
			break;
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] == 'a' || str[i] == 'A')
				cnt++;
			else if (str[i] == 'e' || str[i] == 'E')
				cnt++;
			else if (str[i] == 'i' || str[i] == 'I')
				cnt++;
			else if (str[i] == 'o' || str[i] == 'O')
				cnt++;
			else if (str[i] == 'u' || str[i] == 'U')
				cnt++;
		}
		printf("%d\n", cnt);
	}
}
