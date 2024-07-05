#include <stdio.h>

int dd[1005][1005], a[1005][1005];
int s, t, u, v, n, m;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int isValid(int x, int y) {
	if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1 && dd[x][y] == 0) return 1;
	return 0;
}

int dfs(int x, int y) {
	if (x == s && y == t) return 1;
	dd[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if (isValid(x1, y1)) {
			if (dfs(x1, y1)) return 1;
		}
	}
	return 0;
}

int main() {
	scanf("%d %d", &n, &m);
	scanf("%d %d %d %d", &s, &t, &u, &v);
	s--; t--; u--; v--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	if (dfs(u,v)) printf("YES");
	else printf("NO");
}

