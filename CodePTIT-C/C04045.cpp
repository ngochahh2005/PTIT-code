#include <stdio.h>
#include <string.h>

void solve() {
	char ch[1000];
	gets(ch);
	int l = strlen(ch), n = 0, d = 0, chan = 0, le = 0;
	for (int i = 0; i < l; i++) {
		if (ch[i] != ' ') {
			n = n*10 + (ch[i]-'0');
		} else {
			d++;
			if (n % 2 == 0) chan++;
			else le++;
			n = 0;
		}
	}
	d++;
	if (n % 2 == 0) chan++;
	else le++;
	if (d % 2 == 0 && chan > le) {
			printf("YES\n");
		} else if (d % 2 != 0 && le > chan) {
			printf("YES\n");
		} else printf("NO\n");
} 

int main()
{
	int t;
	scanf("%d", &t);
	char ch[10];
	fgets(ch, sizeof(ch), stdin);
	while (t--) {
		solve();
	}
}
