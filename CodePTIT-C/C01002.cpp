#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t-- > 0) {
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", n*2);
	}	
}
