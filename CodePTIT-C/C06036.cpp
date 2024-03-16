#include <stdio.h>
#include <string.h>

int main()
{
	char str[100005];
	gets(str);
	printf("%d", strlen(str)-1);
}
