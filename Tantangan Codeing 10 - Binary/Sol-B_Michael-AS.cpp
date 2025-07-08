#include <stdio.h>
#include <math.h>

unsigned long long rumus (long long x) {
	return (x * (x + 1) * (2*x + 1)) / 6;
}

unsigned long long BinaryKuadrat (unsigned long long max) {
	int left = 1, right = 1e7; unsigned long long solve = -1;
	while (left <= right) {
		unsigned long long mid = left + (right - left) / 2;
		if (rumus(mid) >= max) {
			solve = mid;
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	return solve;
}

int main () {
	int T;
	scanf("%d", &T);
	
	for (int t = 1; t <= T; t++) {
		unsigned long long prob;
		scanf("%llu", &prob);
		
		unsigned long long res = BinaryKuadrat(prob);
		printf("Case #%d: %llu\n", t, res);
	}
}

