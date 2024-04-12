#include<stdio.h>
#include<stdlib.h>
#define ll long long

int check(int a[],int n)
{
	ll b[n];
	for(int i = 0; i < n; i++) b[i] = (ll)a[i] * a[i];
	for(int i = n-1; i > 1; i--) {
		int l = 0, r = i - 1;
		while (l < r) {
			if(b[l] + b[r] == b[i]) return 1;
			else if(b[l] + b[r] > b[i]) r--;
			else l++;
		}
	}
	return 0; 
}

int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		qsort(a,n,sizeof(int),cmp);
		if(check(a,n)) printf("YES\n");
		else printf("NO\n");
	}
}

