#include <stdio.h>
#include <math.h>
int sang[10005]; 

int main()
{
	int n, s = 0;
	scanf("%d", &n);
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 100; i++) {
		if (sang[i] == 1) continue;
		for (int j = 2*i; j <= 10000; j+=i) {
			sang[j] = 1;
		}
	} 
	int check = 0;
	for (int p = 1; p <= 11; p++) {
		if (sang[p] == 0) {
			int x1 = (int)pow(2,p)-1;
			if (sang[x1] == 0) {
				int x2 = (int)pow(2,p-1);
				if (x1*x2 == n) {
					check = 1;
					break;
				}
			}
		}
	} 
	printf("%d", check);
}
