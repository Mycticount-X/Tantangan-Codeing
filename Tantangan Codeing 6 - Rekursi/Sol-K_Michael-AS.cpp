#include <stdio.h>

long long NotFibo (long long n, long long f0, long long f1) {
	if (n == 0) return f0;
	if (n == 1) return f1;
	
	return NotFibo(n-1, f0, f1) + NotFibo(n-2, f0, f1);
}

int main () {
	long long f0, f1, N;
	scanf("%lld %lld", &f0, &f1);
	scanf("%lld", &N);
	long long res = NotFibo(N, f0, f1);
	printf("%lld\n", res);
	return 0;
}
