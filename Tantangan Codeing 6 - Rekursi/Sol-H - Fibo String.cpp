#include <stdio.h>

int rStr (int n, char cx, char cy) {
	if (n == 0) {
		printf("%c", cx);
		return 0;
	}
	
	if (n == 1) {
		printf("%c", cy);
		return 1;
	}
	
	return rStr(n - 1, cx, cy) + rStr(n - 2, cx, cy);
}

int main () {
	int T; scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int N; scanf("%d", &N);
		char cx, cy;
		scanf(" %c %c", &cx, &cy);
		
		printf("Case #%d: ", t);
		int res = rStr(N, cx, cy);
		printf("\n");
	}
	return 0;
}
