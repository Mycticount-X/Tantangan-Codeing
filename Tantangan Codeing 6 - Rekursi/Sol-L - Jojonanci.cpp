#include <stdio.h>

long long JojoFibo (long long n, long long f0, long long f1) {
	if (n == 0) return f0;
	if (n == 1) return f1;
	
	return JojoFibo(n-1, f0, f1) - JojoFibo(n-2, f0, f1);
}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		long long f0, f1, N;
		scanf("%lld", &N);
		scanf("%lld %lld", &f0, &f1);
		long long res = JojoFibo(N, f0, f1);
		printf("Case #%d: %lld\n", t, res);
	}
	return 0;
}
