#include <stdio.h>

long long JojoFiboReborn (long long n) {
	if (n == 0) return 0;
	if (n > 0 && n < 4) return 1;
	if (n % 2 == 1) return 1;
	
	return JojoFiboReborn(n-1) + JojoFiboReborn(n-2);
}

int main () {
	long long N;
	scanf("%lld", &N);
	long long res = JojoFiboReborn(N);
	printf("%lld\n", res);
	return 0;
}
