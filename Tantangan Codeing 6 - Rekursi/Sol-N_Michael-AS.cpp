#include <stdio.h>

int done = 0;

int Map [10][10] = {0};

void ResetMap () {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			Map[i][j] = 0;
		}
	}
}

void BlackRush (int m, int r, int c) {
	if (r < 1 || r > 8 || c < 1 || c > 8 || Map[r][c] == 1) {
		return;
	}
	
	Map[r][c] = 1;
	
	if (m > 0) { m--;
		BlackRush(m, r - 1, c - 2);
		BlackRush(m, r - 1, c + 2);
		BlackRush(m, r + 1, c + 2);
		BlackRush(m, r + 1, c - 2);
		BlackRush(m, r - 2, c - 1);
		BlackRush(m, r - 2, c + 1);
		BlackRush(m, r + 2, c - 1);
		BlackRush(m, r + 2, c + 1);
	}
}

void WhiteRush (int m, int r, int c) {
	if (r < 1 || r > 8 || c < 1 || c > 8) {
		return;
	}
	
	if (Map[r][c]) {
		done = 1;
		return;
	}
	
	if (m > 0) { m--;
		WhiteRush(m, r - 1, c - 2);
		WhiteRush(m, r - 1, c + 2);
		WhiteRush(m, r + 1, c + 2);
		WhiteRush(m, r + 1, c - 2);
		WhiteRush(m, r - 2, c - 1);
		WhiteRush(m, r - 2, c + 1);
		WhiteRush(m, r + 2, c - 1);
		WhiteRush(m, r + 2, c + 1);
	}
}

int main () {
	int T;
	scanf("%d", &T); getchar();
	
	for (int t = 1; t <= T; t++) {
		char r1, r2;
		int c1, c2;
		
		int m;
		scanf("%d", &m); getchar();
		scanf("%c%d %c%d", &r1, &c1, &r2, &c2); getchar();
		int rt1 = r1 - 'A' + 1;
		int rt2 = r2 - 'A' + 1;
		
		done = 0;
		if (t != 1) ResetMap();
		BlackRush(m, rt1, c1);
		WhiteRush(m, rt2, c2);
		
		
		if (done)
			printf("Case #%d: YES\n", t);
		else
			printf("Case #%d: NO\n", t);
	}
	return 0;
}
