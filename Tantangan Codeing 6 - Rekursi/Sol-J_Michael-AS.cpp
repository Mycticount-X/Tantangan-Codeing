#include <stdio.h>

int current = -1;
// Jojo (1) - Lili (0)
// Karena yg true adalah yg kalah, saya balik

long long operation (long long n) {
	current = !(current);
	if (n == 1) return current;
	if (n % 2 == 0) {
		return operation(n / 2);
	} else {
		return operation(n * 3 + 1);
	}
}

int main () {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		long long N;
		scanf("%lld", &N);
		long long res = operation(N);
		current = 1;
		if (res) {
			printf("Case #%d: Jojo\n", t);
		} else {
			printf("Case #%d: Lili\n", t);
		}
	}
	return 0;
}
