#include <stdio.h>

int cx;
long long FiboMemo (long long n) {
	cx++;
	if (n == 0) return 1;
	if (n == 1) return 2;
	
	return FiboMemo(n - 1) + FiboMemo(n - 2);
}

int main () {
	int T; scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) { cx = 0;
		long long N; scanf("%lld", &N);
		long long res = FiboMemo(N);
		
		printf("Case #%d: %d\n", t, cx);
	}
	
	return 0;
}
