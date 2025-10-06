#include <stdio.h>

int cx;

long long FiboMemo (long long n) {
	if (n == 0) return 1;
	if (n == 1) return 2;
	
	if (n % 3 == 0 && n != 0) cx++;
	
	if (n % 5 == 0) return n * 2;
	
	return FiboMemo(n - 1) + n + FiboMemo(n - 2) + n - 2;
}

int main () {
	int T; scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) { cx = 0;
		long long N; scanf("%lld", &N);
		long long res = FiboMemo(N);
		
		printf("Case #%d: %lld %d\n", t, res, cx);
	}
	
	return 0;
}
