#include <stdio.h>

int min = 80;

void HorseRush (int m, int r, int c, int endr, int endc) {
	if (r < 1 || r > 8 || c < 1 || c > 8) {
		return;
	}
	
	if (r == endr && c == endc) {
		if (m < min) {
			min = m;
		}
		return;
	}
	
	if (m < 6) { m++;
		HorseRush(m, r - 1, c - 2, endr, endc);
		HorseRush(m, r - 1, c + 2, endr, endc);
		HorseRush(m, r + 1, c + 2, endr, endc);
		HorseRush(m, r + 1, c - 2, endr, endc);
		HorseRush(m, r - 2, c - 1, endr, endc);
		HorseRush(m, r - 2, c + 1, endr, endc);
		HorseRush(m, r + 2, c + 1, endr, endc);
		HorseRush(m, r + 2, c - 1, endr, endc);
	}
}

int main () {
	int T;
	scanf("%d", &T); getchar();
	
	for (int t = 1; t <= T; t++) {
		char r1, r2;
		int c1, c2;
		
		scanf("%c%d %c%d", &r1, &c1, &r2, &c2); getchar();
		int rt1 = r1 - 'A' + 1;
		int rt2 = r2 - 'A' + 1;
//		printf("%d %d %d %d\n", rt1, rt2, c1, c2);
		
		min = 80;
		HorseRush(0, rt1, c1, rt2, c2);
		
		printf("Case #%d: %d\n", t, min);
	}
	return 0;
}
