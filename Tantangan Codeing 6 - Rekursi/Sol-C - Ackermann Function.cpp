#include <stdio.h>

long long Ackerman (long long m, long long n) {
	if (m == 0) return n+1;
	if (m > 0 && n == 0) return Ackerman(m - 1, 1);
	if (m > 0 && n > 0) return Ackerman(m - 1, Ackerman(m, n - 1));
}

int main () {
	long long m,n;
	scanf("%lld %lld", &m, &n);
	long long res = Ackerman(m, n);
	printf("result: %lld\n", res);
	return 0;
}
