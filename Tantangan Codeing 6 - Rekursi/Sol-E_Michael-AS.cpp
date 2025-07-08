#include <stdio.h>

int summa;

void LoopVsRekursi (int i, int n) {
	if (i < n) {
		int X; scanf("%d", &X);
		summa += X;
		LoopVsRekursi(i + 1, n);
	}
}

int main () {
	int T; scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		int N; scanf("%d", &N);
		
		summa = 0;
		LoopVsRekursi(0, N);
		
		printf("Case #%d: %d\n", t, summa);
	}
}
