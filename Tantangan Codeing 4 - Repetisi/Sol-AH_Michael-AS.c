#include <stdio.h>

int main () {
	int test;
	scanf("%d", &test);
	
	for (int t = 1; t <= test; t++) {
		long long num;
		scanf("%lld", &num);
		
		int count = 0;
		while (num > 0) {
			num /= 10;
			count++;
		}
		
		printf("Case #%d: %d\n", t, count);
	}
	return 0;
}
