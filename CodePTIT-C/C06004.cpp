#include <stdio.h>
#include <ctype.h>
#include <string.h> 

int main()
{
	char str[205];
	int chu = 0, so = 0, ktu = 0;
	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < strlen(str)-1; i++) {
		if (isalpha(str[i])) chu++;
		else if (isdigit(str[i])) so++;
		else ktu++;
	}
	printf("%d %d %d", chu, so, ktu);
}
